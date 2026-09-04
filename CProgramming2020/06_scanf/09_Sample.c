//Rohan Satyamurthy
//13 Oct 2020
//Program : info for student.

//header files
#include<stdio.h>

//entry point function
int main()
{

    //local variable declaration.
    char cName[256];
    int iAge;
    int iDOB;
    float fWeight;
    float fHeight;
    char cAddress[256];
    
    
    printf("\t\t***************************Basic Information of Student***************************\n\n");
    
    printf("Enter the name of the Student\n");
    scanf("%[^'\n']s",cName);
    
    printf("Enter the age of the student\n");
    scanf("%d",&iAge);
    
    printf("Enter the DOB in DDMMYYYY format\n");
    scanf("%d",&iDOB);
   
    printf("Enter weight of the student\n");
    scanf("%f",&fWeight);
    
    printf("Enter the height in feet\n");
    scanf("%f",&fHeight);
    
    printf("Enter the address\n");
    scanf(" %[^'\n']s",cAddress);
    
    printf("\n\nThe Name of the Student %s\n",cName);
    printf("The Age of the Student %d\n",iAge);
    printf("The Date of Birth of student %d\n",iDOB);
    printf("The Weight of the student is %2.2f\n",fWeight);
    printf("The Height of the student is %2.2f\n",fHeight);
    printf("The Address of the student is %s\n\n",cAddress);
	    
    return(0);
    
}

