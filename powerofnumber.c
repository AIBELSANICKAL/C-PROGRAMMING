#include<stdio.h>
 int multiply(int n1,int n2){
  if (n2==0){
  return 1;
  }else{
  return n1*multiply(n1,n2-1);
 }
 }
int main(){
  int num1,num2;
  printf("Enter the number:");
  scanf("%d",&num1);
  printf("enter the expotential number:");
  scanf("%d",&num2);
  printf("the value is:%d",multiply(num1,num2));
  return 0;
} 
		  
		   
