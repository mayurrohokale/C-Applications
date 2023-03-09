#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int Arr[5];        //static memory allocation

    int Size = 0;
    int *ptr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&Size);

    ptr = (int *)malloc(sizeof(int) * Size);    //dynamic memory allocation

    free(ptr);

    return 0;
}