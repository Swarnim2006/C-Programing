#include <stdio.h>

main()
{
	float i,p,q,r,n,a,b;
	for(i=1;i<=10;i++)
	{
		printf("\n\nEnter principal, rate, time (in year) and compound interest respectively : ");
		scanf("%f%f%f%f", &p,&r,&n,&q);
		
		b=pow((1+r/q),n*q);
		a=p*b;
		
		printf("\n%f is the amount.", a);
	}
}