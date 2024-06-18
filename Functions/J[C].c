#include<stdio.h>

main()
{
	fs(0, 1, 25);
	return 0;
}

fs(int fis, int sec, int term)
{
	int num;
	if (term == 0)
		return;
	num = fis + sec;
	fis = sec;
	sec = num;
	printf("%d, ", num);
	fs(fis, sec, term - 1);
}