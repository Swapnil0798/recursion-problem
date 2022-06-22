#include<stdio.h>
void DisplayR(char brr[])
{
    if(*brr!='\0')
    {
        DisplayR(brr+1);
        printf("%c\n",*brr);         
    }
}
/*
Enter string :
hello
o
l
l
e
h
*/
int main()
{  
    char arr[20];
    printf("Enter string :\n");
    scanf("%s[^'\n']s",arr);

    DisplayR(arr);
    return 0;
}