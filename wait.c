#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int status;
	int pid = fork();
	if(pid == 0){
		printf("Sono il figlio, il mio pid è: %d. ", getpid());
		printf("Il mio papi ha pid: %d\n", getpid());
		exit(69);
}
else{
	printf("Sono il padre, il mio pid è : %d.", getpid());
	printf("L'exit di mio figlio (%d) è : %d\n", wait(&status), status);
	return 0;
	}
}
