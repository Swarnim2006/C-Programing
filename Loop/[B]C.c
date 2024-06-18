#include <stdio.h>

main()
{
    int base, power, ans = 1;
    printf("Please Enter The Base , and The Power : ");
    scanf("%d%d", &base, &power);

    while(power){
        ans = ans*base;
        power = power - 1;
    }

    printf("The Answer is %d", ans);
}