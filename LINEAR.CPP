/* Q19. Write a program to search for presence of particular value in array element using linear search.

Program:-
Linear search location of the position */
#include<stdio.h>
#include<conio.h>
main()
{
   int a,n[10],sk,loc;
   clrscr();
   printf("Enter any 10 no.");
   for(a=0;a<=9;a++)
   {
     scanf("%d", &n[a]);
   }
   printf("Enter the search Key : ");
   scanf("%d", &sk);
   for(a=0;a<=9;a++)
   {
       if(n[a]==sk)
       loc=a+1;
   }
   if(loc!=0)
   {
       printf("The value at %d location", loc);
   }
   else
   {
	printf("The value not found:");
   }
   getch();
   }
