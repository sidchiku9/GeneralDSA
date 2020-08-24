#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
struct sjf
{
    int at, bt, pid, it, ft, tt, wt;
} * p;
int main()
{
    struct sjf temp;
    int min, j, i, n, avgtt = 0, avgwt = 0;
    printf("\nNumber Of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = malloc(n * sizeof(struct sjf));
    }
    for (i = 0; i < n; i++)
    {
        printf("\nenter the pid of process %d:", i + 1);
        scanf("%d", &p[i].pid);
        printf("enter the arrival time of process %d:", i + 1);
        scanf("%d", &p[i].at);
        printf("enterthe burst time of process %d:", i + 1);
        scanf("%d", &p[i].bt);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i].at > p[j].at)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    min = 0;
    j = 1;
    while (j < n && p[j].at == p[0].at)
    {
        if (p[j].bt < p[min].bt)
            min = j;
        j++;
    }
    temp = p[0];
    p[0] = p[min];
    p[min] = temp;
    p[0].it = p[0].at;
    p[0].ft = p[0].it + p[0].bt;
    printf("\n\nPROCESS%d:", p[0].pid);
    p[0].it = p[0].at;
    printf("\nInitial time:%d", p[0].it);
    p[0].ft = p[0].it + p[0].bt;
    printf("\nFinal time:%d", p[0].ft);
    p[0].tt = p[0].ft - p[0].at;
    for (i = 1; i < n; i++)
    {
        min = i;
        j = i + 1;
        while (j < n && p[j].at <= p[i - 1].ft)
        {
            if (p[j].bt < p[min].bt)
                min = j;
            j++;
        }
        temp = p[i];
        p[i] = p[min];
        p[min] = temp;
        if (p[i].at <= p[i - 1].ft)
        {
            printf("\n\nPROCESS%d:", p[i].pid);
            p[i].it = p[i - 1].ft;
            printf("\nInitial time:%d", p[i].it);
        }
        else
        {
            printf("\n\nPROCESS %d", p[i].pid);
            p[i].it = p[i].at;
            printf("\nInitial time: %d", p[i].it);
        }
        p[i].ft = p[i].it + p[i].bt;
        printf("\nFinal time:%d", p[i].ft);
    }
    for (i = 0; i < n; i++)
    {
        p[i].tt = p[i].ft - p[i].at;
        p[i].wt = p[i].tt - p[i].bt;
        avgtt = avgtt + p[i].tt;
        avgwt = avgwt + p[i].wt;
    }
    avgtt = avgtt / n;
    printf("\nAvg TAT:%d", avgtt);
    avgwt = avgwt / n;
    printf("\naverage waiting time:%d", avgwt);
    printf("\n\tPID\t\tAT\t\tBT\t\tIT\t\tFT\t\tTAT\t\tWT");
    for (i = 0; i < n; i++)
    {
        printf("\n\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", p[i].pid, p[i].at, p[i].bt, p[i].it, p[i].ft, p[i].tt, p[i].wt);
    }
}