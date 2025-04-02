#include<stdio.h>
   struct student{
   int rollno;
   char name[20];
   float cgpa;
   };
    int main(){
    	struct student S1;
    	printf("Enter the student roll number:");
    	scanf("%d",&S1.rollno);
    	printf("Enter the student name:");
    	scanf("%s",S1.name);
    	printf("Enter the student CGPA:");
    	scanf("%f",&S1.cgpa);
    	printf("The student details:");
    	printf("\nname: %s",S1.name);
    	printf("\nrollno: %d",S1.rollno);
    	printf("\ncgpa: %f",S1.cgpa);
     return 0;
    	}
