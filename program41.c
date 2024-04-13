#include<stdio.h>                  

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        //printf("%d\n",iCnt);
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is : %ld\n",iRet);
   
    return 0;
}