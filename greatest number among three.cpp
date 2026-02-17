#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter three number:\n")
	scanf("%d %d %d", &a,&b,&c);
	d=greater (a,b);
	e=greater (d,c);
	printf("the greater number is:%d",e);
	getch();
	
}
