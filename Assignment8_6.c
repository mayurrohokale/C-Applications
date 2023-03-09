#include<stdio.h>

int main()
{
    const int no = 21;
    int * const p = &no;

    printf("%d\n",p);
    printf("%d\n",*p);


    /*
    The code int * const p = &no; declares a constant pointer variable named p that points to an integer, 
    and initializes it with the address of the integer variable no. 
    The const keyword in this context applies to the pointer variable p,
     which means that once initialized, p cannot be made to point to a different memory location.
     However, the integer value pointed to by p can be modified
     */
    return 0;
}