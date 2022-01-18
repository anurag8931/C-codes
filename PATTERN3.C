#include<conio.h>
#include<stdio.h>

void main()
{
    int i,j,k;
    clrscr();
    for(i=5;i>=0;i--)
    {
	    for(j=i;j>0;j--)
	    {
	        printf(" ");
	    }
        for(k=0;k<5-i;k++)
        {
            printf("*");
        }
	    printf("\n");
    }
    getch();
}