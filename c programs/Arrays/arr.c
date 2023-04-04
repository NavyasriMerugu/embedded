#include<stdio.h>
int main()
{
int arr[10],i,sum=0;
for(i=0,i<10,i++)
{
printf("enter the value for arr[%d]:",i);
scanf("%d",arr[i]);
sum+=arr[i];
}
printf("sum=%d",sum);
}
