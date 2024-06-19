#include <stdio.h>

main(){

    int num[25];
    int check;
    int count, i;

    printf("Please Enter 25 Numbers : \n");
    for(i = 0; i < 25; i++ ){
        scanf("%d", &num[i]);
    }

    printf("Please Enter The Number You Want To Check : \n");
    scanf("%d", &check);

    count = search(num, check);
    printf("%d Appeared %d Times In The List :", check, count);
}

int search(int a[25], int check){
    int repeat, j;
    for(j = 0; j < 25; j++){
        if(check == a[j]){
            repeat++;
        }
    }
    return repeat;
}
