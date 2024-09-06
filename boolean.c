#include <stdio.h>
#include <stdbool.h>
bool oe ();
int num = 4;
int main ()
{
if ( oe ())
{
    printf ( "even");
    }
    else {
        printf ("odd");
    }
        return 0;
    
    
    
}
bool oe ()
{
    if (num%2==0)
    {
        return true;

    }
    else {
        return false;
    }
}