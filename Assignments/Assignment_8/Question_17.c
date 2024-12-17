#include <stdio.h>
#include <unistd.h>

int main() {
	pid_t c1 = 1, c2 = 1;
	c1 = fork();
	if(c1 != 0)
		c2 = fork();
	if(c2 == 0) {
		fork();
		printf("1\n");
	}
	return 0;
}

/*
	O/P
	1
	1

	Number of direct children to the main process: 2
	Total processes: 4
*/