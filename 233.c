#include<stdio.h>
void DisplayR(int ino)
{
    static int i=0;
    if(i<=ino)
    {
        printf("%c\t",'a'+i);
        i++;
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