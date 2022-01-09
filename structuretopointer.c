#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct marks
{
    int maths;
    int physics;

};

int main()
{
struct marks  *p;
p=(struct marks*)malloc(sizeof(struct marks));
p->maths=5;
p->physics=9;
printf("%d\n",p->maths);
printf("%d\n",p->physics);

}