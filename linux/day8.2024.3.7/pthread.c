#include <stdio.h>  

#include <stdlib.h>  

#include <pthread.h>  

  

// 线程函数，它将被新线程执行  

void *thread_function(void *arg) {  

    // 在这里执行线程的任务  

    printf("Hello from new thread!\n");  

    return NULL;  

}  

  

int main() {  

    pthread_t thread_id; // 线程ID  

    int result; // 用于存储pthread_create的返回值  

  

    // 使用pthread_create创建新线程  

    result = pthread_create(&thread_id, NULL, thread_function, NULL);  

    if (result != 0) {  

        perror("Failed to create thread");  

        exit(EXIT_FAILURE);  

    }  

  

    // 等待线程完成  

    pthread_join(thread_id, NULL);  

  

    printf("Main thread continues after creating the new thread.\n");  

  

    return 0;  

}
