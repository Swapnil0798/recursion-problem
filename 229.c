#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='a';
    for(icnt=0;icnt<=ino;icnt++)
    {
        printf("%c",ch);
        ch++;
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