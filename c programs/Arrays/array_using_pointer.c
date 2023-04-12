// c program to print array using pointer
#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int *ptr=arr;
int sum=0;
for(int i=0;i<5;i++)
{
sum+=*(ptr+i);
}
printf("sum of the array is:%d",sum);
}
//output:sum of the array is:15
