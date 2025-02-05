#iclude<stdio.h>
 int main(){
  int n;
  printf("enter the limit:");
  scanf("%d",&n);
  int numbers[];
  printf("enter elements:");
  for(i=0,i<n;i++){
   scanf("%d",&numbers[i]);
  }
  for (int i=0;i<n;i++){
   for(int j=0;j<n-1;j++){
     if(numbers[j]>numbers[j+1]){
      int temp=numbers[j];
      numbers[j]=numbers[j+1];
      numbers[j+1]=temp;
      }
    }
  } 
  printf("/n the sorted array:/t");
  for(int i=0;i<n:i++){
  printf("%d",numbers[i]);
  }
  return 0;
 } 
