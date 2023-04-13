// c program to update an existing array element located at the given index
#include <stdio.h>  
void main()
 {  
int arr[5] = {18, 30, 15, 70, 12};  
int item = 50, i, pos = 3;  
printf("Given array elements are :\n");  
for(i = 0; i<5; i++)
 {  
printf("arr[%d] = %d ", i, arr[i]);  
}  
arr[pos-1] = item;    
printf("Array elements after updation :\n");  
for(i = 0; i<5; i++)
 {  
printf("arr[%d] = %d ", i, arr[i]);  
}  
}
// output: Given array elements are :
//arr[0] = 18 arr[1] = 30 arr[2] = 15 arr[3] = 70 arr[4] = 12
//Array elements after updation :
//arr[0] = 18 arr[1] = 30 arr[2] = 50 arr[3] = 70 arr[4] = 12
 