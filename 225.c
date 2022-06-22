#include<stdio.h>
int countcapital(char brr[])
{
    int icnt=0;
    while(*brr!='\0')
    {
        if(*brr>='A'&&*brr<='Z')
        {
            icnt++;
        }
        brr++;
    }
    return icnt;
}
///////////////////////////////////////////////////
//Enter the string ABCDabcd
//capital case in string are:4
int main()
{
  char  arr[20];
  int iret=0;
  printf("Enter the string");
  scanf("%[^'\n']s",arr);

  iret=countcapital(arr);
  printf("capital case in string are:%d",iret);
  return 0;
}