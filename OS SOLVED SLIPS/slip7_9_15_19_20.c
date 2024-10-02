//Q.1 slip 7, 9, 15, 19, 20

#include<stdio.h> //printf
#include<unistd.h> //fork(), execlp()
#include<sys/types.h> //pid_t
#include<stdlib.h> //exit()

int main() {
	pid_t pid;
	//create a process
	pid = fork();
	
	if(pid < 0) {
		//fork failed
		perror("Fork Failed !!");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0) {
		printf("Child Process (PID: %d)\n",getpid());
		execl("/bin/ls","ls",NULL);
		perror("execl failed");
        	exit(EXIT_FAILURE);
	}
	else {
		printf("Parent Process (PID: %d)\n",getpid());
		sleep(6);
		printf("Parent Process: Waking up, exiting...\n");
        	exit(EXIT_SUCCESS);
	}
	return 0;
}