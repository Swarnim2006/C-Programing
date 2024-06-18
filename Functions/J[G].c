#include<stdio.h>

main()
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);

	printf("\n\nYou've Entered\n\na : %d	b : %d	c : %d\n", a, b, c);
	chng(&a, &b, &c);

	printf("\nAfter Shifting\n\na : %d	b : %d	c : %d\n", a, b, c);
	return 0;

}
chng(int *a, int *b, int *c)
{
	int x;
	x = *c;
	*c = *b;
	*b = *a;
	*a = x;
}