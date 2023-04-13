//c program to insert one or more elements into the array
#include<stdio.h>
int main()
{
int arr[20]={20,12,13,35,67,86};
int i,a,pos,n=5;
printf("array elements before insertion\n");
for(i=0;i<n;i++)
printf("%d",arr[i]);
printf("\n");
a=50;
pos=4;
n++;
for(i=n-1;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=a;
printf("array elements after insertion\n");
for(i=0;i<n;i++)
printf("%d",arr[i]);
printf("\n");
}
//output:array elements before insertion
//2012133567
//array elements after insertion
//201213503567
