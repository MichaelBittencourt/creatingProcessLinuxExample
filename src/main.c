#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

#ifdef EXEC_TEST

int main() {
    printf("Now the Script will call echo and try print something\n");
    execlp("/bin/echo", "echo", "$0 $SHELL", "$(whoami)", NULL);
    printf("The list files does not work because the process are replaced\n");
    execlp("/bin/ls", "ls", "-la", NULL);
    
    return 0;
}

#elif defined SIMPLE_TEST

int main() {

    printf("Count: 0\n");
    fork();
    printf("Count: 1\n");
    fork();
    printf("Count: 2\n");
    fork();
    printf("Count: 3\n");
    return 0;
}
#else 

void printChildren(pid_t children[], int qtd) {
    printf("Process %d: [ ", getpid());
    for (int i = 0; i < qtd; i++) {
        printf("%d ", children[i]);
    }
    printf("]\n");
}

int main() {

    pid_t pid;
    pid_t childrean[3];
    int qtdChildrean = 0;
    for (int i = 0; i < 3; i++) {
        pid = fork();
        if (pid == 0) {
            qtdChildrean = 0;
        } else if (pid > 0) {
            childrean[qtdChildrean] = pid;
            qtdChildrean++;
        } else {
            fprintf(stderr, "An error occurs when create a new Process");
        }
    }
    printChildren(childrean, qtdChildrean);
}
#endif
