//Q.1 slip 2, 11

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

int main() {
    pid_t pid = fork(); // Create a new process

    if (pid < 0) {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // This block is executed by the child process
        printf("Hello World(PID: %d)\n", getpid());
    } else {
        // This block is executed by the parent process
        printf("Hi (PID: %d, Child PID: %d)\n", getpid(), pid);
        wait(NULL);
    }

    return 0;
}