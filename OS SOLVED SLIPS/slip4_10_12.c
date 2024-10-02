//Q.1 slip 4, 10, 12

#include<stdio.h>
#include<stdlib.h> //includes exit() for program termination
#include<unistd.h> //include fork(), sleep()
#include<sys/types.h> //defines data type like pid_t

int main() {
	pid_t pid;
	
	//Create a child process
	pid = fork();
	
	if(pid < 0) {
		//Error in fork
		perror("Fork Failied");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0) {
		//Child Process
		printf("Child Process (PID:%d), Parent Process (PID:%d)\n",getpid(),getppid());
		sleep(6);
		printf("Child Process completed exceution after 6s sleep");
	}
	else {
		printf("Parent Process (PID: %d)\n",getpid());
		sleep(2);
		printf("Parent Process: Exiting....\n");
		exit(EXIT_SUCCESS);
	}
	return 0;
}