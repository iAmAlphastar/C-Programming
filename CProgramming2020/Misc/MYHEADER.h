#define MAX 10
#define WRITE printf
#define READ scanf
#define EXIT return
#define SIZE 5


typedef int UINT;
typedef float SINGLE_PRECISION;


//functions
//function definition
UINT Maths(UINT val1,UINT val2)
{
    //int c = val1 * val2 * MAX;
    EXIT(val1 * val2 * MAX);
}

UINT Add(UINT a,UINT b)
{
    return(a+b);
}

float AddF(float a,float b)
{
    return(a+b);
}
