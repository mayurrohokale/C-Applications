#include<stdio.h>

int main()
{
    const int no = 11;
    const int *p = &no;

    printf("%d\n",p);
    printf("%d\n",*p);

/*
The code const int *p = &no; declares a pointer variable named p that points to a constant integer,
 and initializes it with the address of the constant integer variable no. 
 The const keyword in this context applies to the integer pointed to by the pointer p, 
 which means that the value of no cannot be modified through the pointer p. 
 However, the pointer itself can be modified, i.e., the pointer p can be made to point to a different memory location.
*/
    return 0;
}