#include<stdio.h>

int main()
{
    int no1 = 11, no2 = 21, no3 = 51;
    int * arr[] = {&no1, &no2, &no3};

    printf("%d\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",sizeof(arr[1]));
    printf("%d\n",sizeof(arr[2]));




   

    return 0;
}