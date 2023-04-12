//C Program to copy first string into second string
#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str2[20];
printf("enter the first str:");
scanf("%s",str1);
printf("enter the second str:");
scanf("%s",str2);
strcpy(str1,str2);
printf("first str:%s , second string:%s\n",str1,str2);
strcpy(str1,"navya");
strcpy(str2,"sri");
printf("first str :%s ,second string:%s\n",str1,str2);
}

//output:
//enter the first str:navya
//enter the second str:sri
//first str:sri , second string:sri
//first str :navya ,second string:sri
