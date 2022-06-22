#include <stdio.h>
#include <conio.h>
#define N 3
int pin[N];
int ip=0,rp=0;
int empty();
int full();
void qinsert();
void qremove();
char menu();
void pr();
main()
{
	char ch;
	while(1)
	{
		ch=menu();
		if(ch=='E')
			break;
		if(ch=='U')
			qinsert();
		if(ch=='O')
			qremove();
		if(ch=='P')
			pr();
	}
	pr();
}
void pr()
{
	if(!empty())
		for(int i=ip; i<rp; i++)
			printf("\npin[%d]: %d\n",i,pin[i]);
	else 
		printf("\nH oura einai adeia...");
}
void qremove()
{
	if(!empty())
	{
		printf("\npin[%d]: %d -> removed",ip,pin[ip]);
		for(int i=0; i<rp; i++)
			pin[i-1]=pin[i];
		rp--;
	}
	else
		printf("\nIs empty!!!\n");
}
void qinsert()
{
	if(!full())
	{
		printf("pin[%d]: ",rp);
		scanf("%d",pin+rp);
		rp++;
	}
	else
		printf("\nIs full\n");
}
int empty()
{
	if(ip==rp)
		return 1;
	return 0;
}
int full()
{
	if(rp==N)
		return 1;
	return 0;
}
char menu()
{
	char c;
	printf("\nU.insert\n");
	printf("O.remove\n");
	printf("P.print\n");
	printf("E.Exit\n");
	c=getche();
	return c;
}
