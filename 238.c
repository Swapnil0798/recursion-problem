#include<stdio.h>
void DisplayR(char brr[])
{
    if(*brr!='\0')
    {
        printf("%c\n",*brr);
        
        DisplayR(++brr);
    }
}
/*
Enter string :
hello
h
e
l
l
o
*/
int main()
{  
    char arr[20];
    printf("Enter string :\n");
    scanf("%s[^'\n']s",arr);

    DisplayR(arr);
    return 0;
}