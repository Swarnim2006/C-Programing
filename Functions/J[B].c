#include<stdio.h>

main()
{
	nonrec_pf(24);
	return 0;

}

nonrec_pf(int num)
{
	int i;
	for (i = 2; num != 1; i++)
	{
		if (num%i != 0)
			continue;
		else
		{
			if (check_prime(i) == 1)
			{
				while (num%i == 0)
				{
					printf("%d, ", i);
					num /= i;
				}
			}
		}
	}
}

check_prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (i%num == 0)
			break;
		i++;
	}
	if (i == num)
		return 1;
	return 0;
}