#include<stdio.h>

int main()
{
    double arr[] = {12.3,1.23,12.8};
    double * p = arr;
    char * q = &(arr[0]);
    char * r = &(arr[3]);

    printf("%d\n",arr);
    printf("%d\n",&(arr[0]));
    printf("%d\n",&(arr[3]));
    printf("%f\n",*q);
    printf("%d\n",r);
    printf("%f\n",*p);
    

    
    return 0;
}