#include <stdio.h>
#include <math.h>

main()
{
	int check = 0, a, b, ans;
	for(a = 1; a <= 500; a++ )
	{
		b = a;
		ans = 0;
		while(b)
		{
			check = b%10;
			check = pow(check, 3);
			ans += check; 
			b /= 10;
		}
		if(a == ans)
			printf("%d, ", ans);
	}
	printf("are the armstrong numbers between 1 and 500.");
}