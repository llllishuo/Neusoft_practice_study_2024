#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <unistd.h>  
#include <arpa/inet.h>  
  
#define PORT 8080  
#define BUF_SIZE 1024  
  
int main() {  
    int server_fd, new_socket;  
    struct sockaddr_in address;  
    int opt = 1;  
    int addrlen = sizeof(address);  
    char buffer[BUF_SIZE] = {0};  
    const char *hello = "Hello from server";  
  
    // 创建socket文件描述符  
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {  
        perror("socket failed");  
        exit(EXIT_FAILURE);  
    }  
  
    // 设置socket选项  
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {  
        perror("setsockopt");  
        exit(EXIT_FAILURE);  
    }  
  
    address.sin_family = AF_INET;  
    address.sin_addr.s_addr = INADDR_ANY;  
    address.sin_port = htons(PORT);  
  
    // 绑定socket描述符到端口  
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {  
        perror("bind failed");  
        exit(EXIT_FAILURE);  
    }  
  
    // 监听端口  
    if (listen(server_fd, 3) < 0) {  
        perror("listen");  
        exit(EXIT_FAILURE);  
    }  
  
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {  
        perror("accept");  
        exit(EXIT_FAILURE);  
    }  
  
    // 向客户端发送数据  
    if (send(new_socket, hello, strlen(hello), 0) < 0) {  
        perror("send failed");  
        exit(EXIT_FAILURE);  
    }  
  
    // 从客户端接收数据  
    if (recv(new_socket, buffer, BUF_SIZE, 0) < 0) {  
        perror("recv failed");  
        exit(EXIT_FAILURE);  
    }  
  
    printf("Message received: %s\n", buffer);  
  
    return 0;  
}
