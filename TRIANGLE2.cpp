#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k,t,f1,f2,f3,z,sp;
sp=20;
for(i=0;i<=3;i++)
{
	for(k=0;k<sp-i;k++)
	sp=1;
	for(j=0;j<=i;j++)
	{
		f1=f2=f3=1;
		t=i;
		while(t!=0)
		{
			f1=f1*t;
			t--;
		}
		t=j;
		while(t!=0)
		{
			f2=f2*t;
			t--;
		}
		t=i-j;
		while(t!=0)
		{
			f3=f3*t;
			t--;
		}
		z=f1/(f2*f3);
		cout<<" z";
	}
	cout<<"endl";
}
getch();
}
