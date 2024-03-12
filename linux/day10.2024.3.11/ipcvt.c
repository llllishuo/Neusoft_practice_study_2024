#include <stdio.h>  
#include <stdlib.h>  
#include <arpa/inet.h>  
  
int main() {  
    struct in_addr addr;  
    unsigned int ip_as_int;  
    char ip_str[INET_ADDRSTRLEN];  
  
    printf("请输入IP地址（点分十进制格式）: ");  
    scanf("%s", ip_str);  
  
    // 使用inet_aton函数将点分十进制格式的IP地址转换为32位网络字节序的二进制形式  
    if (inet_aton(ip_str, &addr) == 0) {  
        fprintf(stderr, "无效的IP地址\n");  
        return EXIT_FAILURE;  
    }  
  
    // 将32位网络字节序的二进制形式转换为无符号整数  
    ip_as_int = (unsigned int)addr.s_addr;  
  
    printf("IP地址的32位无符号整数表示为: %u\n", ip_as_int);  
  
    return EXIT_SUCCESS;  
}
