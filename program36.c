#include<stdio.h>                   //interview madhe pahila prog ha lihaycha
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    ULONG iResult = 1;                  //only positive value

    if((iBase < 0) || (iPower < 0))                 //Filter
    {
        return 0;
    }

    for (iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;
    
    printf("Enter base \n");
    scanf("%d",&iValue1);

    printf("Enter Power \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1, iValue2);

        printf("Result is : %ld\n",iRet);


    return 0;
}