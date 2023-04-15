#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elemnts\n");
    scanf("%d",&size);

    p = (int*)malloc(sizeof(int) * size);

    printf("Please Enter Elements \n");
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\n",p[iCnt]);
    }
  
    free(p);

    return 0;


    return 0;
}



