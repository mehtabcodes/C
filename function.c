#include<stdio.h>
#include<conio.h>
int substract(int a, int b){

int c;
c=a-b;
return c;
}
int main()
{
int num1=999, num2=600, difference;
difference=substract(num1,num2);
printf("the difference is %d", difference);



}