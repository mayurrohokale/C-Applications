#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int *ptr = NULL;

    // step 1: Allocate the memory 
    ptr = (int *)malloc(sizeof(int) * 5);    //20 bytes


    ptr = (int *)realloc(ptr, sizeof(int) * 7);    // 28 bytes
 //ptr = (int *)realloc(ptr, sizeof(int) * 3);      //12 bytes


    float value = 3.14;
    float *p = &value;
    float *q = p;
    float ans = *p + *q;
    printf("%f",ans);
    free(ptr);

    return 0;
}