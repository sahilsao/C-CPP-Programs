#include<iostream.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1; i<=3; i++)
{
   for(j=3; j>=i; j--)
   {
    cout<<" ";
   }
     for(j=1; j<=i; j++)
     {
  	 cout<<" *";
     }
     cout<<endl;
 }
getch();
}