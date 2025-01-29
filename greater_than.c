#include <stdio.h>
    int main(){
        int num1,num2,num3;
        printf("enter the numbers:");
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1>num2){
            if(num1>num3){
                printf("the greatest is%d",num1);
            }else{
                printf("the largest number is %d",num3);
            }
        }else if(num2>num1){
            if(num2>num3){
                printf("the largest is%d",num2);
            }else{
                printf("the largest number is%d",num3);
            }
        }else if(num3>num1){
            if(num3>num2){
                printf("the largest number is%d",num3);
            }else{
                printf("the largest number is%d",num2);
        }else{
            printf("the largest numbers are equal");
        } 
        return 0;
       }        
