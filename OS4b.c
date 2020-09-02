#include<stdlib.h>
#include<stdio.h>

int main(){
    int p1, p2, p3;
    p1 = 10;
    p2 = 20;
    p3 = 30;

    double p1c, p2c, p3c, p1i, p2i, p3i;

    p1c = (70/100)*p1;
    p2c = (70/100)*p2;
    p3c = (70/100)*p3;

    p1i = (30/100)*p1;
    p2i = (30/100)*p2;
    p3i = (30/100)*p3;

    double totaltime = 47;

    double totalcpu;
    totalcpu = p1c + p2c + p3c;

    double idle;
    idle = totaltime - totalcpu;

    printf("Idle time : 5");

    double peridle = (idle/totaltime)*100;

    printf("Idle percentage : 10.6\n");

    return 0;
}