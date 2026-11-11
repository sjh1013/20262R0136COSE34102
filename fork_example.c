#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        printf("Child : pid=%d, parent=%d\n", getpid(), getppid());
    } else {
        wait(NULL);
        printf("Parent: pid=%d, child=%d\n", getpid(), pid);
    }
    return 0;
}
