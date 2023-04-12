// c program to add the elements of an array
#include<stdio.h>
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int sum=0, i;
for(i=0;i<10;i++)
{
sum +=arr[i];
}
printf("the sum of elements of the array is %d\n",sum);

}
//output:the sum of elements of the array is 55