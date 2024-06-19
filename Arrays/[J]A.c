#include <stdio.h>

main(){

    int len, i, j;

    printf("How Long Of A Array Do You Want To Enter : ");
    scanf("%d", &len);
    printf("%d", len);

    int arr[len];

    printf("\nPlease Enter The Array : ");

    for(i = 0; i <= len-1; i++){
        scanf("%d ", &arr[i]);
    }
    for(j = 0; j < len; j++){
        printf("\n%d ", arr[j]);
    }
    if(is_palindrome(arr, len)){
        printf("The Array is Palindrome");
    }
    else{
        printf("The Array is not a Palindrome");
    }

    
}

is_palindrome(int arr[], int len){

    int i, check;
    if(len%2 == 0){
        for(i = 0; i < (len/2); i++){
            if(arr[i] == arr[((len-1) - i)]){
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
    }
    else{
        for(i = 0; i < (len-1)/2; i++){
            if(arr[i] == arr[((len-1) - i)]){
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
    }

    return check;
}