#include <stdio.h>

main(){

    int num[25];
    int even, odd, pos, neg, i;

    printf("Please Enter 25 Numbers : \n");
    for(i = 0; i < 25; i++ ){
        scanf("%d", &num[i]);
    }

    even = is_even(num);
    odd = is_odd(num);
    pos = is_pos(num);
    neg = is_neg(num);

    printf("Even Numbers : %d\n Odd Numbers : %d\n Positive Numbers %d\n Negative Numbers %d\n", even, odd, pos, neg);

}

int is_even(int arr[25]){
    int j, count=0;
    for(j = 0; j < 25; j++){
        if((arr[j]%2)==0){
            count = count +1;
        }
    }
    return count;
}
int is_odd(int arr[25]){
    int j, count =0 ;
    for(j = 0; j < 25; j++){
        if((arr[j]%2)==1){
            count = count +1 ;
        }
    }
    return count;
}
int is_pos(int arr[25]){
    int j, count = 0;
    for(j = 0; j < 25; j++){
        if(arr[j]>=0){
            count = count + 1;
        }
    }
    return count;
}
int is_neg(int arr[25]){
    int j, count = 0;
    for(j = 0; j < 25; j++){
        if(arr[j] < 0){
            count = count + 1;
        }
    }
    return count;
}

