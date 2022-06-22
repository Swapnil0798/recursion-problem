#include<stdio.h>
int sum(int ino)
{
    static int isum=0;
     int idigit=0;

    if(ino!=0)
    {
        idigit=ino%10;
        isum=isum+idigit;
        ino=ino/10;
        sum(ino);
    }
    return isum;
}
/*
input:
enter the number
1234
output:
sum of digit are:10
*/
int main()
{   
    int ivalue=0;
    int iret=0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret=sum(ivalue);
    printf("sum of digit are:%d",iret);

    return 0;
}