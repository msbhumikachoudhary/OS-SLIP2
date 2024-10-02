//Q.1 slip 3

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<sys/types.h>

int main() {
	pid_t pid = fork(); //create a new process
	
	if(pid < 0) {
		perror("Fork Failed!!");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0) {
		//Child Process
		printf("Child Process (PID: %d)\n)",getpid());
		execlp ("ls","ls",NULL); //execute the date command
		perror("execlp failed!!");
		exit(EXIT_FAILURE);
	}
	else {
		//Parent Process
		printf("Parent Process (PID: %d), Child Process (PID: %d)\n",getpid(),pid);
		wait(NULL); //pauses the parent process until one of its child finishes execution
		printf("Child Process has terminated,control returned back to Parent Process\n");
	}
}