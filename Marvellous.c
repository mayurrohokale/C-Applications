#include<stdio.h>

#include "PPA.h"
int main()
{
    struct Demo obj;

    printf("Inside main\n");

    printf("Rate of Interest is %f\n",ROI);     //10.7

    printf("Fees of Logic Building Batch is : %d\n",FEES);      //18200

    printf("Size of Demo Structure is : %d\n",sizeof(obj));     //8

    return 0;
}