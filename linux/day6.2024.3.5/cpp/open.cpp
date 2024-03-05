#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define FILE_PATH "./test.txt"

int main (int argc, char *argv[]) {
  int fd;
  if ((fd = open(FILE_PATH,O_RDWR|O_CREAT|O_EXCL,0644))<0) {
    printf("open Error!!\n");
  }else {
    printf("open Success!!\n");
  }
  return 0;
}



