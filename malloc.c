#include <stdio.h>
#include<stdlib.h>
int main()
{

int i;
int *p;
p=(int *) malloc (3*sizeof(int));
p[0]=1; p[1]=5;p[2]=9;
for(i=0;i<=3;i++)
{
    printf("the numbers in the heap is %d\n", p[i]);
}


}