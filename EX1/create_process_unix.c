#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    pid_t pid;

    // Inicia o processo filho
    pid = fork();

    // Exception Handler
    if (pid < 0) {
        printf("Fork falhou");
        exit(-1);
    }
    // Processo filho
    else if (pid == 0) {
        execlp("/bin/ls", "ls", NULL);
        printf("Processo filho: %d", pid);
    }
    // Processo Pai
    else {
        // wait(NULL);
        printf("\n Processo Pai: %d \n", pid);
        exit(0);
    }
}