#include<stdio.h>

/*
 arr[4]={10,20,30,40}
  sumation is:100
*/
int sumR(int brr[],int isize)
{ 
    int i=0;
    int isum=0;
    while(i<=isize)
    {
        isum=isum+brr[i];
        i++;
    }
    return isum;
}
// accept array from user and perform adition of number
int main()
{
   int arr[]={10,20,30,40};
   int iret=0;

   iret=sumR(arr,4);

   printf("sumation is:%d",iret);

  return 0;
}