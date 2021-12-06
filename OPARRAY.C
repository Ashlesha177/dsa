#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5];
 int i,item,flag=0;
 clrscr();
 printf("enter the element in the array \n");
 for(i=0;i<=4;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the element that you want to search \n");
 scanf("%d",&item);
 for(i=0;i<=4;i++)
 {
  if(item==a[i])
  {
   //flag=1;
   break;
  }
 }
 if(i==5)
  printf("\nitem is found in the array at location  =%d",i);
 else
  printf("\n item is not found in the array");
 getch();
 }