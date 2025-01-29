#include<stdio.h>
  int main(){
    int num1,num2;
    char operation;
    printf("\n Enter the numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("\nchoose an operation:\nAddition (A)\nSubtraction (S)\nMultiplication (M)\n Division (D)\n");
    scanf("%c",&operation);
    switch(operation){
        case 'A':
          printf("\nresult:%d",n1+n2);
          break;
        case 'S':
          printf("\nresult:%d",n1-n2);
          break;
        case 'M':
          printf("\nresult:%d",n1*n2);
          break;
        case 'D':
          printf("\nresult:%d",n1/n2):
          break:
        default:
          print("\n invalid input!");
          break;
  }
  return 0;
}
      
