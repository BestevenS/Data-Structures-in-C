#include <stdio.h>
#include <conio.h>
#define N 5
void arxik();
void qinsert();
void qremove();
int full();
int empty();
void pr();
char menu();
int pin[N],start=-1,finish=-1; //finish=exodos start=eisodos
main()
{
	char ch;
	while(1)
	{
		ch=menu();
		if(ch=='U')
			qinsert();
		if(ch=='O')
			qremove();
		if(ch=='P')
			pr();
		if(ch=='E')
			break;
	}
	pr();
}
void arxik()
{
	finish=start=0;
}
void qremove()
{
	if(!empty())
	{
		printf("\npin[%d]-> %d",start,pin[start]);
		if(start<N-1)
			start++;
		else start=0;
	}
	else arxik();
}
void qinsert()
{
	if(!full())
	{
		if(empty())
			arxik();
		else finish=(finish+1)%N;
		printf("\npin[%d]-> ",finish);
		scanf("%d",pin+finish);
	}
	else
		printf("\nIt's full...");
}
int empty()
{
	if(finish==-1)
		return 1;
	else return 0;
}
int full()
{
	printf("\ntest:\nstart: %d\n finish: %d",start,finish);
	return start==(finish+1)%N;
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
void pr()
{
	if(!empty())
	{
		int i=start;
		while(i!=finish)
		{
			printf("\npin[%d]-> %d",i,pin[i]);
			i=(i+1)%N;
		}
	}
	else printf("\nIt's empty...");
}
