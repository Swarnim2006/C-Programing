#include<stdio.h>
#include<math.h>

main()
{
	float x, sum;
	printf("Enter the angle in radians : ");
	scanf("%lf", &x);
	sum = sine(x);
	printf("\n\nsin(%lf) = %lf", x, sum);
	return 0;
}

sine(x)
float x;
{
	int i, j, sign = 1;
	float sum = 0;
	for (i = 0, j = 1; i < 5; i++, j += 2, sign *= -1)
		sum = sum + sign*pow(x, j) / fact(j);
	return sum;
}

fact(int num)
{
	int ans = 1;
	while (num > 0)
	{
		ans *= num;
		num--;
	}
	return ans;
}