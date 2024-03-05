#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <fcntl.h>  

int main (int argc, char *argv[]) {
  int fd = open("./test.txt",O_RDONLY);
  if (fd == -1){
    perror("open");
    exit(EXIT_FAILURE);
  }
  char buf[1024];
  ssize_t n = read(fd, buf, sizeof(buf));
  if (n == -1){
    perror("read");
    exit(EXIT_FAILURE);
  }

  write(STDOUT_FILENO, buf, n);
  close(fd);

  

  return 0;
}






