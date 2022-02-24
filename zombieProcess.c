#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){
	pid_t zombie;

	zombie = fork();

	if (zombie == 0){
		printf("%d", zombie);
		exit(0);
	}

	else{
		printf("%d", zombie);
		sleep(10);
	}
	
	return 0;
}
