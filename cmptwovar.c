#include<stdio.h>
#include<string.h>	
int main(){
	char string1[50],string2[50];
	printf("Enter the first string:");
	scanf("%s",string1);
	printf("enter the second string:");
	scanf("%s",string2);
	int result=strcmp(string1,string2);
	if(result==0){
	   printf("both string are same.");
    }
	else{
	      printf("they are not same.");
     } 
	return 0;
 }
