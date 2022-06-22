#include<stdio.h>
void DisplayR(int ino)
{
    static int i=0;
    static char ch='a';
    if(i<=ino)
    {
        i++;   
        DisplayR(ino);
        printf("%c\t",ch);
        ch++;
    }
}
/*
input:
enter the number
6
output:
abcdefg
*/
int main()
{   
    int ivalue=0;
    int iret=0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    DisplayR(ivalue);
    return 0;
}