#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value a=");
	scanf("%d",&a);
	printf("enter value b=");
	scanf("%d",&b);
	printf("enter value c=");
	scanf("%d",&c);
	if (a<b)
	{
	   if(a<c)
	    {
		printf("a is min");
		
     	}
	    else 
     	{
		printf("c is min");
	    }
    }
	else
	{
	
	   if (b<c)
    	{
		printf("b is min");
		}
	    else
		{
		   printf("c is min");
		}
	}
}
