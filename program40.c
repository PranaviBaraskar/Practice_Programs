#include<stdio.h>   

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
      //  printf("%d\n",iCnt);
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is : %d",iRet);
   
    return 0;
}