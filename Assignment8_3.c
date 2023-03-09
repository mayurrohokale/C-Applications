#include<stdio.h>

int main()
{
    int arr[] = {10,20,30,40};
    int *p = arr;
    int *q = arr + 1;
    int ans = *q - *p;

    printf("%d\n",arr);   //100
    printf("%d\n",p);     //100
    printf("%d\n",q);     //104
    printf("%d\n",*p);    //10
    printf("%d\n",*q);    //20
    printf("%d\n",ans);   //(20-10) = 10




   

    return 0;
}