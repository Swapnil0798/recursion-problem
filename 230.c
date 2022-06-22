#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='a';
    while(icnt<=ino)
    {
        printf("%c",ch);
        ch++;
        icnt++;
    }
}
/*
enter the number
6
abcdefg
*/
int main()
{   
    int ivalue=0;
    int iret=0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

     Display(ivalue);
    return 0;
}