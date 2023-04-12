//c program to find the address of pointer
#include<stdio.h>
int main()
{
int number=50;
int *p;
p=&number;
printf("address of p variable is %x",p);
printf("Value of p variable is %d ",*p);
return 0;
}
//output:address of p variable is ffffcc24 value of p variable is 50
