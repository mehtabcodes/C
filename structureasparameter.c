#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
    int length;
    int breadth;

};
struct Rectangle*fun()
{
struct Rectangle *p;
p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
p->length=5;
p->breadth=9;
return p;
}
int main()
{

struct Rectangle *ptr=fun();
printf("length is %d\n breadth is %d\n",ptr->length,ptr->breadth);
return(0);


}



