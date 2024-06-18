#include <stdio.h>

main()
{
	int i,num,max,min, how, range;
	
	printf("Enter how many number you want to enter : ");
	scanf("%d", &how);
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	max=min=num;
	
	for( i = 1; i < how; i++)
	{
		printf("Enter the number : ");
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	range = max - min;
	
	printf("\n\n%d is the range of the data.", range);
}