#include <stdio.h>

main()
{
    int  j;
    float i,term, sum, factorial;

    for(i = 1; i <= 7; i += 1){
        factorial = i;
        for(j = 1; j < i; j++){
            factorial *= j;
        }

        term = i/factorial;
        sum += term;
    }

    printf("The Sum is %f", sum);
}