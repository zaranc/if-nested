#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter value a=");
	scanf("%d",&a);
	printf("enter value b=");
	scanf("%d",&b);
	printf("enter value c=");
	scanf("%d",&c);
	printf("enter value d=");
	scanf("%d",&d);
	printf("enter value e=");
	scanf("%d",&e);
	if (a<b)
	{
	   if(a<c)
	    {
		  printf("c is min");
		
     	}
	    else 
     	{
		  printf("a is min");
	    }
    }
	else
	{
	
	    if (b<c)
    	{
		   printf("c is min");
		}
	    else
		{
		   printf("b is min");
		}
	}
        if(c<d)
        {
	   
	      {
		    printf("d is min");
		
     	  }
        }
	    else
	    {
	        if (d<c)
     	  {
		    printf("c is min");
	      }
	    }
	   if(d<e)
        {
	   
	      {
		    printf("e is min");
		
     	  }
        }
	   
}
