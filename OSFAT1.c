#include <stdio.h>

int intersection(int a, int b)
{
    return 0;
}

int uni(int a, int b)
{
    return 0;
}

int triunion(int a, int b, int c)
{
    return 10; //given AUBUC
};

int triintersection(int a, int b, int c)
{
    return triunion(a, b, c) - a - b - c + intersection(a, b) + intersection(b, c) + intersection(c, a);
}

int main()
{
    int x, op;
    int set[3];
    printf("\nCreating Dance Set");
    set[0] = 6;
    printf("\nCreating Dramatic Set");
    set[1] = 4;
    printf("\nCreating Music Music");
    set[2] = 8;
    int ch;
    scanf("%d", &ch);
    return 0;
}