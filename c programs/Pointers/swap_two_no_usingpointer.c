//C Program Swap Numbers Using Call by Reference 

#include<stdio.h>                                                               
// Swap function declaration                                                    
void swap(int*, int*);                                                          
void main()                                                                     
{                                                                               
   int a, b;                                                                    
                                                                                
   printf("Enter a: ");                                                         
   scanf("%d", &a);                                                             
   printf("Enter b: ");                                                         
   scanf("%d", &b);                                                             
                                                                                
   printf("Before swap: a = %d, b = %d\n", a, b);                               
   swap(&a, &b);                                                                
   printf("After Swap: b = %d, b = %d\n", a, b);                                
}                                                                               
//Swap function definition                                                      
void swap(int *a, int *b) 
{
int temp;
temp=*b;
*b=*a;
*a=temp;
} 
// output:enter a=34
        //enter b=56
    before swap: a=34,b=56
    after swap: a=56,b=34                           