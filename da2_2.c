#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("The process ID is: %d\n", getpid());
}