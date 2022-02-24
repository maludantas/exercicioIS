# exercicioIS

## O código
```c
# Bibliotecas usadas
#include <stdio.h>
#include <unistd> //biblioteca pra usar o fork
#include <stdlib.h>

int main(void){
	pid_t zombie; //variável pra receber o ID 

	zombie = fork(); //criar filho

	if (zombie == 0){ //prioriza o pai
		exit(0)
	}

	else{ //prioriza o filho
		sleep(10)
	}
	
	return 0;
}
```
