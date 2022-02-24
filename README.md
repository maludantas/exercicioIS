# exercicioIS

## O código
```c
# Bibliotecas usadas
#include <stdio.h>
#include <unistd.h> //biblioteca pra usar o fork
#include <stdlib.h>

int main(void){
	pid_t zombie;

	zombie = fork();

	if (zombie == 0){ //prioriza o filho
		printf("%d", zombie);
		exit(0);
	}

	else{ //prioriza o pai
		printf("%d", zombie);
		sleep(10);
	}
	
	return 0;
}
```
