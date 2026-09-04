//Rohan Satyamurthy
//26 Oct 2020
//need of "else if"


#include<stdio.h>

int main()
{

       //Local variable
       char cAnswer ;
       
       char cAdhar , cLightBill , cRationCard , cPan ,cIdProof;
       
       printf("Enter 'Y' if you hav Adhar else enter 'N'\n");
       scanf(" %c",&cAdhar);

       printf("Enter 'Y' if you hav Light Bill else enter 'N'\n");
       scanf(" %c",&cLightBill);

       printf("Enter 'Y' if you hav Ration Card else enter 'N'\n");
       scanf(" %c",&cRationCard);

       printf("Enter 'Y' if you hav PAN else enter 'N'\n");
       scanf(" %c",&cPan);

       printf("Enter 'Y' if you hav ID proof else enter 'N'\n");
       scanf(" %c",&cIdProof);

       //printf("Adhar %c , Light Bill %c , Ration Card %c , Pan %c , ID proof %c\n",cAdhar,cLightBill,cRationCard,cPan,cIdProof);
       
       
   //Nested if statement
       
       if(cAdhar == 'Y' || cAdhar == 'y')
       {
           printf("Adhar is Available.\n");
       }//closing for Adhar
       else
       {
            if(cLightBill == 'Y' || cLightBill == 'y')
           {
               printf("Light bill is present\n\n");
           }
           else
           {
                if(cRationCard == 'Y' || cRationCard == 'y')
                {
                    printf("Ration card is there");
                }
                else
                {
                    if(cPan == 'Y' || cPan == 'y')
                    {
                        printf("Pan card is there\n\n");
                    }
                    else
                    {
                            if(cIdProof == 'Y' || cIdProof == 'y')
                            {
                                  printf("Id proof\n\n");
                            }
                            else
                            {
                                 printf("inside else\n\n");
                            }
                    }
                }
           }
       }
           
        
    return(0);
}


/*
     if(cRationCard == 'Y' || cRationCard == 'y')
     {
         if(cPan == 'Y' || cPan == 'y')
         {
             if(cIdProof == 'Y' || cIdProof == 'y')
             {
                 printf("You have all docuemnts you can proceed further...!!!\nThank You\n\n");
             }//inner if i.e. ID proof
         }//closing if for PAN
     }//closing of if for Ration
 }//closing for Light Bill

 */
