#include<stdio.h>
void DisplayR(char brr[])
{
    while(*brr!='\0')
    {
        printf("%c\n",*brr);
        brr++;
    }
}
/*
*/
int main()
{  
    char arr[20];
    printf("Enter string :\n");
    scanf("%s[^'\n']s",arr);

    DisplayR(arr);
    return 0;
}