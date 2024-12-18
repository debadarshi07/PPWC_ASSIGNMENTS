#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	pid_t childpid;
	childpid = fork();
	if (childpid == -1) {
		printf("Fork error\n");
		return 1;
	}
	else if (childpid == 0) {
		printf("Child:PID = %ld ---- PPID = %ld\n", (long)getpid(), (long)getppid());
		sleep(100);
		printf("Child:PID = %ld ---- PPID = %ld\n", (long)getpid(), (long)getppid());
	}
	else {
		printf("Parent:PID = %ld ---- PPID = %ld\n", (long)getpid(), (long)getppid());
		exit(0);
	}
}
