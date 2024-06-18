#include<stdio.h>

main()
{
	printf("\n\nUsing recursion binary Equivalent of 12 is : ");
	rec_bin(12);

	printf("\n\nWithout using recursion binary Equivalent of 18 is : ");
	nonrec_bin(18);
	return 0;
}

/*non recursive function*/
nonrec_bin(int num)
{
	int sum = 0;
	for (; num; num /= 2)
	{
		sum += num % 2;
		sum *= 10;
	}
	printf("%d", sum);
}

/*recursive function*/
rec_bin(int num)
{
	if (num == 0)
		return;
	rec_bin(num / 2);
	printf("%d", num % 2);
}