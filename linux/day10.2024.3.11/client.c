#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <unistd.h>  
#include <arpa/inet.h>  
  
#define PORT 8080  
#define BUF_SIZE 1024  
  
int main() {  
    struct sockaddr_in serv_addr;  
    int sock = 0, valread;  
    struct sockaddr_in serv_addr_local;  
    char buffer[BUF_SIZE] = {0};  
    char *hello = "Hello from client";  
  
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {  
        printf("\n Socket creation error \n");  
        return -1;  
    }  
  
    serv_addr.sin_family = AF_INET;  
    serv_addr.sin_port = htons(PORT);  
  
    // 将IPv4和IPv6地址从文本转换为二进制形式  
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {  
        printf("\nInvalid address/ Address not supported \n");  
        return -1;  
    }  
  
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {  
        printf("\nConnection Failed \n");  
        return -1;  
    }  
  
    // 向服务器发送数据  
    if (send(sock, hello, strlen(hello), 0) < 0) {  
        printf("\nSend failed \n");  
        return -1;  
    }  
  
    // 从服务器接收数据  
    valread = read(sock, buffer, BUF_SIZE);  
    printf("%s\n", buffer);  
  
    return 0;  
}
