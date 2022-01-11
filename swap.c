#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{

int temp;
temp=*a;
*a=*b;
*b=temp;

}


int main()
{

int x=9,y=8;
swap(&x,&y);
printf(" first number after swapping = %d\n " , x );
printf("second number after swapping = %d\n " , y );
}
