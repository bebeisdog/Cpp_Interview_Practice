#include <stdio.h>
#include <iostream>


int gint = 0;
void changePtr (int** pInt)
{
    *pInt = &gint;
}
int main ()
{
    int local_int = 1;
    int *localPtr = &local_int;
    changePtr (&localPtr);
    printf ("%d\n", *localPtr);
}