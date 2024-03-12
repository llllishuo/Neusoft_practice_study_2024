/*
 *  作业1.1
 *  转换ip地址为网络字节序
 *  
 * */


#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main (int argc, char *argv[]) {

  if ( 3 != argc ){
    printf("Usage : %s <IP> <port>\n", argv[0]);
    return -1;
  }

  int fd = socket(AF_INET,SOCK_STREAM,0);
  if ( -1 == fd ) {
    printf("socket err ...");
    return -1;
  }


  char *addr = argv[1];
  struct sockaddr_in addr_inet;

  if(!inet_aton(addr, &addr_inet.sin_addr)){
      printf("Conversion error");
      return -1;
  }else{
      printf("Network ordered integer addr: %#x \n", addr_inet.sin_addr.s_addr);
  }


  return 0;
}


