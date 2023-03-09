#include<stdio.h>

int main()
{
    float value = 3.14;
    float *p = &value;
    float *q = p;
    float ans = *p + *q;


    printf("%f\n",value);   //3.14
    printf("%d\n",p);     //100
    printf("%d\n",q);     //100
    printf("%f\n",*p);    //3.14
    printf("%d\n",*q);    //100
    printf("%f\n",ans);   //103.14




   

    return 0;
}