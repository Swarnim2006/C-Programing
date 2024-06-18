#include <stdio.h>
#include <math.h>

main()
{
	
	int num, ans = 0, temp, i;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i = 1; num; i *= 10)
	{
		temp = num % 8;
		ans += temp*i;
		num /= 8;
	}
	
	printf("\n%d is the octal equivalent of %d.", ans, num);
}