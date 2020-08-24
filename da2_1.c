#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int n;
    printf("1. Parent-Child process\n2. Zombie process\n3. Orphan process\n");
    scanf("%d", &n);
    if (n == 1)
    {
        int a = fork();
        if (a == 0)
        {
            printf("I am child process and my PID is: %d\n", getpid());
        }
        else
        {
            printf("I am parent process and my PID is: %d\n", getpid());
        }
    }
    else if (n == 2)
    {
        int a = fork();
        if (a > 0)
        {
            printf("I am parent and i am going to sleep, PID: %d\n", getpid());
            sleep(50);
            printf("It was a nice sleep, PID:  %d\n", getpid());
        }
        else
        {
            printf("i am child and ima head out, PID: %d\n", getpid());
            exit(0);
        }
    }
    else if (n == 3)
    {

        int pid = fork();
        if (pid > 0)
            printf("in parent process, PID: %d, Parent PID: %d\n", getpid(), getppid());
        else if (pid == 0)
        {
            sleep(50);
            printf("in child process, PID: %d, Parent PID: %d\n", getpid(), getppid());
        }
    }
    return (0);
}