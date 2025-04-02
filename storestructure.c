#include<stdio.h>
	typedef struct{
	    char name[20];
	    int rollno;
	    float cgpa;
	    }student;
	    	int main(){
	    	    student S[10];
	    	    for(int i=0;i<10;i++){
	    	     printf("\n Enter the name:");
	    	     scanf("%s",S[i].name);
	    	     printf("\n Enter the roll no:");
	    	     scanf("%d",&S[i].rollno);
	    	     printf("\n Enter the CGPA:");
	    	     scanf("%f",&S[i].cgpa);
                     }
			return 0;	
	}		    	    	
