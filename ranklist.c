#include<stdio.h>
typedef struct{
	int rollno;
	char name[20];
	int m[3];
	int totalmarks;
	void read(student s[],int n)	{
		for(int i=0;i<n;i++){
		printf("\n rollno:");
		scdanf("%d",s[i].rollno);
		printf("\nEnter the name of the student:");
		scanf("%s",s[i].name);
		return 0;
	
