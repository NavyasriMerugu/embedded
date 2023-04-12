//cprogram to print the element is even or odd using array
#include<stdio.h>
void check(int);
int main()
{
int arr[10],i;
printf("enter the array element:");
for(i=0;i<10;i++)
{
scanf("%d",arr[i]);
check(arr[i]);
}
}
void check(int num)
{
if(num%2==0)
printf("%d is even\n",num);
else
printf("%d is odd\n",num);
}
//output:enter the array element:2
//even