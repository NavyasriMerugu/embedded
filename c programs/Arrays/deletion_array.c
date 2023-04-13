// c program removes an element from the array and then reorganizes all of the array elements
#include <stdio.h>  
void main()
{  
int arr[50] = {18, 30, 15, 70, 12};  
int k = 30, n = 5;  
int i, j;  
printf("Given array elements are :\n");  
for(i = 0; i<n; i++) 
{  
printf("arr[%d] = %d", i, arr[i]);  
}        
j = k;        
while( j < n) {  
arr[j-1] = arr[j];  
j = j + 1;  
}  
n = n -1;     
printf("Elements of array after deletion:\n");  
for(i = 0; i<n; i++) 
{  
printf("arr[%d] = %d", i, arr[i]);  
}  
}
//output:Given array elements are :
//arr[0] = 18arr[1] = 30arr[2] = 15arr[3] = 70arr[4] = 12Elements of array after deletion:
//arr[0] = 18arr[1] = 30arr[2] = 15arr[3] = 70  