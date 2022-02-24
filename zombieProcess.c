#include <stdio.h>
#include <unistd>
#include <stdlib.h>

int main(void){
	pid_t zombie;

	zombie = fork();

	if (zombie == 0){
		exit(0)
	}

	else{
		sleep(10)
	}
	
	return 0;
}
