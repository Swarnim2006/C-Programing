#include <stdio.h>

main(){
    int num[]={};
    int i, k;

    for(i = 0; i < 99; i++){
        num[i] = (i+1);
    }

    prime_generator(num);
}

prime_generator(int arr[]){

    int num, i, j;
    num = arr[1];
    for(j = 0; j < 100; j++){
        if(arr[j]%num == 0){
            arr[j] = 0;
        }
    }

    for(i = 0; i < 100; i++){
        if(arr[i]!=0){
            num = arr[i];
            
        }
    }
}