#include<stdio.h>
#include<stdlib.h>

int *fun(int size)
{
int*p;
int i;
p=(int*) malloc(size*sizeof(int));
for(i=0;i<size;i++)
p[i]=i+1;
return p;
}


int main()
{
int *ptr,sz=7;
ptr=fun(sz);
for(int i=0;i<sz;i++)
printf("%d\n", ptr[i]);
return(0);
}

