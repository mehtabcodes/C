#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 45;
    int*p;;
    p=&a;
    printf("the pointer points %d", a);
    return(0);
}