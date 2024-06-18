#include<stdio.h>
#include<math.h>

main()
{
	float area, a, b, c;
	printf("Enter the sides of the triangle : ");
	scanf("%f%f%f", &a, &b, &c);
	if (a + b >c && b + c >a && a + c>b)
	{
		area = ar(a, b, c);
		printf("\n\nArea of the triangle : %f", area);
	}
	else
		printf("\n\nThe triangle you entered is invalid.");
	return 0;
}

ar(a, b, c)
float a, b, c;
{
	float area;
	float S = (a + b + c) / 2;
	area = sqrt(S*(S - a)*(S - b)*(S - c));
	return (area);
}