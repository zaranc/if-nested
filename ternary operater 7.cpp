#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	printf("enter value of d=");
	scanf("%d",&d);
	printf("enter value of e=");
	scanf("%d",&e);
	
	(a>b)? (a>c)?printf("a is max"): printf("c is max")
	            :(d>e)?printf("d is max"): printf("e is max");     
}
