#include<stdio.h>
      typedef struct{
          float real;
          float imag;
       }complex;
        complex add(complex a,complex b){
        	complex result;
        	result.real=a.real+b.real;
        	result.imag=a.imag+b.imag;
        	return result;
              }
                 int main(){
                 complex a,b;
                 printf("\nEnter the real and imaginary part of the first number:");
                 scanf("%f%f",&a.real,&a.imag);
                 printf("\nEnter the  real and imaginry part of the secound number:");
                 scanf("%f%f",&b.real,&b.imag);
                 result=add(a,b);
                 printf("\nThe result =%2f+%2f:",result.real,result.imag);
                 return 0;
                 }  
