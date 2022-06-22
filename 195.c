#include<stdio.h>
//input:1 2 3
//output: 3 2 1
void displayI(int ino)
{
  
  while(ino!=0)
  {
    printf("%d\t",ino%10);
    ino=ino/10;
  }
}

void displayR(int ino)
{    
  static int icnt=0;

  if(ino!=0)
  {
    
   ino= ino/10;
    displayR(ino);  //recursive call
    
    printf("%d\t",ino%10);
  } 
}

int main()
{
   displayR(123);
   return 0;
}
