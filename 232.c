#include<stdio.h>
void DisplayR(int ino)
{
    
    static char ch='a';
    if(ino!=0)
    {
        printf("%c\t",ch);
        ch++;
        ino--;
        DisplayR(ino);
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