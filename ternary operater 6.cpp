#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	printf("enter value of d=");
	scanf("%d",&d);
	
	(a>b)? (a>c)?printf("a is max"): printf("c is max")
	            :(c>d)?printf("b is max"): printf("d is max");     
}
