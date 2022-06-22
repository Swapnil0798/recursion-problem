#include<stdio.h>
//4
// 4*3*2*1= 24
/*
Enter the number
4
factorial is:24
*/
int FactorialI(int ino)
{
  
  int ifact=1;
  while(ino!=0)
  {
    ifact=ifact*ino;
    ino--;
  }
  return ifact;
}



int main()
{
   int ivalue=0;
   int iret=0;

   printf("Enter the number\n");
   scanf("%d",&ivalue);

   iret=FactorialI(ivalue);

   printf("factorial is:%d",iret);

  return 0;
}