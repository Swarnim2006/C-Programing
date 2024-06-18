#include <stdio.h>
#include<math.h>

main()
{
	int main_count, check_limit, check, upper;
    printf("Please Enter The Upper Bound : ");
    scanf("%d", &upper);
    printf("\n2, 3, ");

    for(main_count = 3; main_count <= upper; main_count += 2){
        
        for(check_limit = 2; check_limit <= (sqrt(main_count)); check_limit += 1){
            if(!(main_count % check_limit)){
                check = 0;
                break;
            }
            check = 1;
        }
        if(check){
            printf("%d, ", main_count);
        }
    }
}