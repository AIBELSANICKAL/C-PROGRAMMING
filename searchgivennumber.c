#include<stdio.h>
     int main(){
        int row,col;
        printf("enter the row and column:");
        scanf("%d %d",&row,&col);
         int matrix[row][col];
         printf("enter the elements:");
         scanf("%d",&matrix[row][col]);
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);			
            }
         }  
           printf("\n");
           
         return 0;
 }
