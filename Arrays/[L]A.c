#include<stdio.h>

main(){
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    modify(num);

    for(i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }
    
}

modify(int *(arr)[]){
    int i;
    for(i = 0; i < 10; i++){
        arr = (&arr);
        arr++;
    }
}