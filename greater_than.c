#include<stdio.h>
   int main(){
       int n1,n2,n3;
       printf("enter the numbers:");
       scanf("%d%d%d",&n1,&n2,&n3);
        if (n1>n2){
         if(n1>n3){
         printf(n1,"%d is the largest");}
         }else{
          printf(n3,"%d is the greatest");   
        }  
        else if(n3>n1){
          if (n3>n2){
          printf(n3"%d is the greatest");
        }else{
              printf(n2"%d is the greatest");
        }
       return 0;
       }
