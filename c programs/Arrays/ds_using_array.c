// c program to prints all array elements one after another
#include<stdio.h>
void  main()
{
int arr[6]={1,2,3,4,56,23};
int i;
printf("elements of the array are:\n");
for(i=0;i<6;i++)
{
printf("arr[%d]=%d",i,arr[i]);
}

}
//output:elements of the array are:
//arr[0]=1arr[1]=2arr[2]=3arr[3]=4arr[4]=56arr[5]=23