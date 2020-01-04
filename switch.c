#include<stdio.h>
#define pi 3.14
void main()
{
	int l,b,r,n;
	float a,p,cir;
	printf("1:Rectangle,2:circle\n");
	printf("Enter a Number=");
	scanf("%d",&n);
	printf("enter a value of l,b,r ");
	scanf("%d%d%d",&l,&b,&r);
	switch(n)
	 {
	 	case 1:
	 	a=l*b;
	 	p=l+l+b+b;
	 	printf("\nenter area %f and perimeter %f",a,p);
	 	case 2:
	 	a=pi*r*r;
	 	p=2*pi*r;
	 	printf("\netner area %f and %f",a,p);
	 	break;
	default:
		printf("you not follow the instruction");
}

	
}
