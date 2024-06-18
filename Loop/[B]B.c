#include <stdio.h>

main()
{
	int i,num, fact;
	
	printf("\nEnter a number : ");
	scanf("%d", &num);
	
	fact = num;
	for(i = 1; i < num; i++)
		fact *= i;
		
	printf("%d is the factorial of %d",fact, num);
}