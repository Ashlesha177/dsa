#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[10];
cout<<"enter the elemnts"<<endl;
 for(int i=0;i<10;i++)
 {
 cin>>arr[i];
 }
 cout<<"the reversed array:"<<endl;
 for  (i=9;i>=0;i--)
 {
 cout<<arr[i]<<endl;
 }
 getch();
}