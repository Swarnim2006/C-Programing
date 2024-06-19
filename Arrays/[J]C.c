#include <stdio.h>

main(){
    int arr[10] = {5, 2, 3, 4, 1, 6, 7, 8, 9, 10};
    int *p, i;
    int max = 0;
    
    p = &max;

    for(i = 0; i < 10; i++){
        if(arr[i]> *p){
            *p = arr[i];
        }
    }

    max = *p;
    printf("The Largest Number is %d", max);
}