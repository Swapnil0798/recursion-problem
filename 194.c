#include<stdio.h>
// *  *  *  *
void displayI()
{
  auto int icnt=0;
  while(icnt<4)
  {
    printf("*\t");
    icnt++;
  }
}

void displayR()
{    
  static int icnt=0;

  if(icnt<4)
  {
    printf("*\t");
    icnt++;
    displayR();  //recursive call
  } 
}

int main()
{
   displayR();
   return 0;
}
