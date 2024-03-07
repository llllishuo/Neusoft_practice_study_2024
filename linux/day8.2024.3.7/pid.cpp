#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main (int argc, char *argv[]) {
  pid_t pid = fork();

  
  if(pid < 0){
    fprintf(stderr, "fork error\n");
    return 1;
  }else if (pid == 0) {
    printf("The child process:%d\n", getpid());
  }else {
    printf("The parent process: %d\n", getpid());
  }

  return 0;
}
