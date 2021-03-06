#define _POSIX_SOURCE
#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    sigset_t sigset;
    int p[2], status;
    char c;
    c = 'z';
    pid_t pid;
    if (pipe(p) != 0)
        perror(“pipe() error ” );
    else
    {
        if ((pid = fork()) == 0)
        {
            sigemptyset(&sigset);
puts(“Child is letting parent know he’s ready for signal”);
write(p[1], &c, 1);
puts(“child is waiting for child to say he’s ready for the signal ”);
sigsuspend(&sigset);
        }
puts(“parent is waiting for child to say he’s ready for signal”);
read(p[0], &c, 1);
puts(“child has told parent he’s ready for signal”);

kill(pid, SIGTERM);

wait(&status);
if (WIFSIGNALED(status) == SIGTERM)
    if (WTERMSIG(status) == SIGTERM)
        puts(“child was ended with a sigterm”);
    else
        printf(“child was ended with a % d signal\n”, WTERMSIG(status));
else
    puts(“child was not ended with a signal”);
close(p[0]);
close(p[1]);
    }
}
