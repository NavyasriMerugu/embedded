//C program to swap two numbers using pointers
#include<stdio.h>
void swapnumber(int *a,int *b)
{
int temp;
temp =*a;
*a=*b;
*b=temp;
}
int main()
{
int number1,number2;
printf("enter the value of number1:");
scanf("%d",&number1);
printf("enter the value of number2:");
scanf("%d",&number2);
printf("before swapping the number: number1 is:%d,number2 is:%d\n",number1,number2);
swapnumber(&number1,&number2);
printf("after swapping the number: number1 is:%d,number2 is:%d\n",number1,number2);
}
//output:enter the value of number1:67
//enter the value of number2:45
//before swapping the number: number1 is:67,number2 is:45
//after swapping the number: number1 is:45,number2 is:67
