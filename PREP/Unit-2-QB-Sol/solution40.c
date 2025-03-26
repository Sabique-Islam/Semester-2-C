#include<stdio.h>
int main()
{
int a = 5,b = 10,c;
int *p = &a,*q = &b;
printf("%p\n",p);
printf("%p\n",q);

c = p-q;
printf("%d",c);
return 0;
}