 //c program to print the intger isn even or odd using array
#include<stdio.h>
int main()
{
int arr[15],i,n,even=0,odd=0;
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("Enter %d elements into the array: ", n);
for (i = 0; i < n; i++)
 {
 scanf("%d", &arr[i]);
 }
for (i = 0; i < n; i++)
 {
 if(arr[i]%2 == 0)
 {
 even++;
 }
 else
 {
 odd++;
 }
 }
printf("Number of even integers in the array: %d\n", even);
printf("Number of odd integers in the array: %d\n", odd);
}
//output:enter the size of the array:2 4
//      number of even integers in the array:2
//      number of odd integers in the array :0