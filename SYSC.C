#include <stdio.h>
#include <conio.h>

void main()
{
	int i,e=300;
	char page;
	clrscr();

	for(i=0;i<e;i++)
	{
		printf("ASHWIN = %d\t",i);
		while(i==100)
		{
			page = getch();
			if(page == 'u' || page == 'U')
			{
				clrscr();
				// ONE PAGE UP.
				i=0;
				break;
			}
			else if(page == 'd' || page == 'D')
			{
				clrscr();
				// ONE PAGE DOWN.
				i=101;
				break;
			}
			else if(page == 'f' || page == 'F')
			{
				clrscr();
				// FIRST PAGE.
				i=0;
				break;
			}
			else if(page == 'l' || page == 'L')
			{
				clrscr();
				// LAST PAGE.

				break;
			}
			else if(page == 'x' || page == 'X')
			{
				clrscr();
				printf("EXIT");
				getch();
				exit(0);
			}
		}
	}
getch();
}