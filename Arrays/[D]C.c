#include <stdio.h>

main(){
    int main_arr[25]={
        25,46,43,56,23,45,31,1,8,9,34,12,34,7,9,23,27,34,90,87,56,3,4,26,9
    };
    int i;
    
    for(i = 0; i < 25; i++){
        printf("%d ", main_arr[i]);
    }
    printf("\n");
    insertion_sort(main_arr);

    for(i = 0; i < 25; i++){
        printf("%d ", main_arr[i]);
    }

}

selection_sort(int arr[25]){

    int i, j, min_index;

    for(i = 0; i < 25; i++){
        min_index = i;

        for(j = i + 1; j < 25; j++){
            
            if( arr[j]< arr[min_index]){
                min_index = j;
            }
        }

        if(min_index != i){
            swap(&arr[min_index],&arr[i]);
        }
    }
}

bubble_sort(int arr[25]){
    int i, j;
    
    for(j = 24; j > 0 ; j = j - 1){

        for(i = 0; i < j; i++){
            
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

insertion_sort(int arr[25]){
    int i , j;

    for(i = 1; i < 25; i++){

        for(j = i; j > 0; j = j - 1){
            if(arr[j -1 ] > arr[j]){
                swap(&arr[j-1], &arr[j]);
            }
        }
    }
}

swap(int *p_1, int *p_2){
    int temp = *p_1;
    *p_1 = *p_2;
    *p_2 = temp;
}