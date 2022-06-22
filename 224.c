#include<stdio.h>

/*
 arr[4]={10,20,30,40}
  sumation is:100
*/
int sumR(int brr[],int isize)
{ 
    static int isum=0;
    if(isize>=0)
    {
        isum=isum+brr[isize-1];
        isize--;
        sumR(brr,isize);
    }
    return isum;
}
// accept array from user and perform adition of n number
int main()
{
   int arr[]={10,20,30,40};
   int iret=0;

   iret=sumR(arr,4);

   printf("sumation is:%d",iret);

  return 0;
}