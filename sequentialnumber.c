#include<stdio.h>
	int main(){
	 int limit,i,item;
	 printf("enter the number elements:");
	 scanf("%d",&limit);
	 int arr[limit];
	  printf("Enter the elements:");
	 for(i=0;i<limit;i++){
	  scanf("%d",&arr[i]);
	 }
	  printf("Enter the elements to check:");
	  scanf("%d",&item);
	  for(i=0;i<limit;i++){
	  if(arr[i]==item){
	  printf("/n%d found in position %d",item,i+1);
	 }
 	}
 	 if(arr[i]!=item){
 	  printf("elements not in the array");
 	 }
 	return 0;
 	}    
