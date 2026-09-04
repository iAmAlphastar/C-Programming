////////////////////////////////////////////////////////////
//
//  Name : Rohan Satyamurthy
//  Program : Display use of Escape Sequence
//  Date : 16 Aug 2020
//
//
///////////////////////////////////////////////////////////

   
//Header files

#include<stdio.h>

//Macro

#define _EXIT return(0)


//Entry point function

int main(int argc,char * argv[],char * envp[])
{
 
    //use of escape sequence \n
    printf("This is example of new line \\n \n This printed on new line\n\n");
    
    //use of escape sequence \t
    printf("This is example of horizontal tab \\t \t This is tabbed output\n\n");

    //use of escape sequence \v
    printf("This is example of vertical tab \\v \v This is vertical tabbed output\n\n");

    //use of escape sequence \b
    printf("This is example of backspace \\b ROHAN\b This is backspace output\n\n");
    
    //use of escape sequence \r
    printf("This is example of carriage \\r \r This is output\n\n");
    
    //use of escape sequence \f
    printf("This is example of formfeed \\f \f This is output\n\n");

    //use of escape sequence \a
    printf("This is example of alert \\a \a This is output\n\n");

    //use of escape sequence " , ' , ?
    printf("This is example of \"double quote\" , 'single qoute' , question mark ? This is output\n\n");

    
            
    _EXIT; //return(0);
}
