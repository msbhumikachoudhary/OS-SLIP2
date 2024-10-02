//Q.1  slip 1, 5, 13

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <sys/wait.h> // Include for wait()

int main() {
    pid_t pid;
    int niceValue = -10; // Declare and initialize niceValue

    pid = fork(); // Create a new process

    if (pid < 0) {
        // Fork failed
        perror("Fork");
        exit(EXIT_FAILURE);
    } 
    else if (pid == 0) {
        // This code is executed by the child process
        printf("Child Process (PID: %d) running with default priority\n", getpid());
        // Child can adjust its own priority if needed
        if (nice(niceValue) == -1) {
            perror("Nice");
            exit(EXIT_FAILURE);
        }
        printf("Child process has adjusted its priority to highest\n");
    } 
    else {
        // Code executed by the parent process
        printf("Parent Process (PID: %d) is running with default priority\n", getpid());

        // Wait for the child process to complete
        //wait(NULL);
        printf("Parent process has waited for the child to finish.\n");
    }
    
    // Add a sleep to keep the processes running for a while
    sleep(5);
return 0;
}