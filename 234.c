#include<stdio.h>
void DisplayR(int ino)
{
    static int i=0;
    if(i<=ino)
    {
        i++;   
        DisplayR(ino);
        printf("%c\t",'a'+i);
    }
}
/*
input:
enter the number
6
output:
h       h       h       h       h       h       h
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