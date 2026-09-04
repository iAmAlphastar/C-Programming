//Rohan Satyamurthy
//Date  : 2 Nov 2020
//Program : Nested switch / MACRO.

#include<stdio.h>

#define MAX 'L'


int main()
{
	//Local Variable
	char ch,ch1;
    int iValue = 0;

	printf("Enter  the character\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'A':
		case 'a':
			printf("Character is A\n");
		break;	
		
		case MAX+1:			
			printf("Character is M\n");
		break;
	
        case 'R':
        case 'r':
            printf("Enter a digit\n");
            scanf("%d",&iValue);

            switch(iValue)
            {
            
                case 1:
                    printf("Case 1\n");
                    break;
                    
                case 2:
                    printf("Case 2\n");
                    break;
                    
                case 3:
                    printf("Case 3\n");
                    break;
                    
                default:
                    printf("Enter a character\n\n");
                    scanf(" %c",&ch1);
                    
                    switch(ch1)
                    {
                      
                        case 'Z':
                        case 'z':
                            printf("We are in nested switch kudos..!!!\n\n");
                            break;
                            
                        default:
                            printf("We are in nested switch but in default case\n\n");
                            break;
                    };
                    
                    break;
                    
            };

            
            break;//End of R case break
            
		default:
			printf("Invalid input\n\n");
		break;

	};
		

	return(0);

}

