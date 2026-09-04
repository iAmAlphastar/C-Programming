 	//Rohan Satyamurthy

#include<stdio.h>

int main()
{
    
    //code
    for(int i = 0 ;i < 5 ; i++)                 //Row
    {
        for(int j = 0;j < 5;j++)                //col
        {
                if(j == 0)
                    printf("%c\t",65 + i);
                else if(j == 1)
                    printf("%c\t",65 + i + 5);  
                else if(j == 2)
                    printf("%c\t",65 + i + 10);
                else if(j == 3)
                    printf("%c\t",65 + i + 15);
                else if(j == 4)
                    printf("%c\t",65 + i + 20);
        }
        printf("\n");
    }
    
    
    return(0);
}


/*

        0 = void / tab
 
                Columns( j )
           | 1    2   3   4   5
 ROWS   1  | A    F   K   P   U
        2  | B    G   L   Q   V
   (i)  3  | C    H   M   R   W
        4  | D    I   N   S   X
        5  | E    J   O   T   Y

 
 
 
 

 
 
*/





























/*
int  main()
{
    for(int i = 0 ; i < 5;i++)
    {
        for(int j = 0;j < 5;j++)
        {
            if(i <= j)
                printf("*\t");
            else
                printf(" \t");
        }
        printf("\n");
    }
    

	return(0);
}
*/

/*
    pattern 2
 int main()
 {
     //code
     for(int i = 1 ;i <= 5 ; i++)                 //Row
     {
         for(int j = 1 ; j <= 5;j++)              //Col
         {
             if( i == j)
             {
                 printf("$\t");
             }
             else
             {
                 printf("*\t");
             }
                         
         }
         printf("\n");
     }
     
     
     return(0);
 }


 
*/

/*
 
 int  main()
 {
     for(int i = 1 ; i <= 5;i++)
     {
         for(int j = 1;j <= 5;j++)
         {
             if((i == 2 && j == 2) || ( i == 2 && j == 3) || (i == 2 && j == 4) || (i == 4 && j == 2) || ( i == 4 && j == 3) || (i == 4 && j == 4))
             {
                 printf("$\t");
             }
             else if(( i == 3 && j == 3))
                 printf("@\t");
             else if((i == 3 && j == 2) || (i == 3 && j == 4))
             {
                 printf("#\t");
             }
             else
             {
                 printf("*\t");
             }
             
         }
         printf("\n");
     }
     

     return(0);
 }

 
 
 //for Alphabet
 int  main()
 {
     for(int i = 0 ; i < 5;i++)
     {
         for(int j = 0;j <= 5;j++)
         {
             printf("%c\t",('A' + j));
         }
         printf("\n");
     }
     

     return(0);
 }

//for Numbers
 int  main()
 {
     for(int i = 0 ; i < 5;i++)
     {
         for(int j = 0;j < 5;j++)
         {
             printf("%d\t",(j + 1));
         }
         printf("\n");
     }
     

     return(0);
 }

 
 //
 *
 *    *
 *    *    *
 *    *    *    *
 *    *    *    *    *
 
 int  main()
 {
     for(int i = 0 ; i < 5;i++)
     {
         for(int j = 0;j < 5;j++)
         {
             if(i >= j)
                 printf("*\t");
         }
         printf("\n");
     }
     

     return(0);
 }


 //
 
 *                   *
      *         *
           *
      *         *
 *                   *
 
 
 int  main()
 {
     for(int i = 0 ; i < 5;i++)
     {
         for(int j = 0;j < 5;j++)
         {
             if(i == j || (i == 4 && j == 0) || (i == 3 && j == 1) || (i == 1 && j == 3) || (i == 0 && j == 4))
                 printf("*\t");
             else
                 printf(" \t");
         }
         printf("\n");
     }
     

     return(0);
 }

 

 //
 *    *    *    *    *
      *    *    *    *
           *    *    *
                *    *
                     *
 
 int  main()
 {
     for(int i = 0 ; i < 5;i++)
     {
         for(int j = 0;j < 5;j++)
         {
             if(i <= j)
                 printf("*\t");
             else
                 printf(" \t");
         }
         printf("\n");
     }
     

     return(0);
 }
 
 
 */
 

 

