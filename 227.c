#include<stdio.h>
int countcapital(char brr[])
{
    static int icnt=0;
    if(*brr!='\0')
    {
        if(*brr>='a'&&*brr<='z')
        {
            icnt++;
        }
        brr++;
        countsmall(brr);
    }
    return icnt;
}
///////////////////////////////////////////////////
//input:Enter the string ABCDabcd
//output:capital case in string are:4
///////////////////////////////////////////////////
int main()
{
  char  arr[20];
  int iret=0;
  printf("Enter the string");
  scanf("%[^'\n']s",arr);

  iret=countsmall(arr);
  printf("capital case in string are:%d",iret);
  return 0;
}