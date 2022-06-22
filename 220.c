#include<stdio.h>
//4
// 4*3*2*1= 24
/*
Enter the number
4
factorial is:24
*/
int FactorialR(int ino)
{ 
 static int ifact=1;
  if(ino!=0)
  {
    ifact=ifact*ino;
    ino--;
    FactorialR(ino);
  }
  return ifact;
}

int main()
{
   int ivalue=0;
   int iret=0;

   printf("Enter the number\n");
   scanf("%d",&ivalue);

   iret=FactorialR(ivalue);

   printf("factorial is:%d",iret);

  return 0;
}