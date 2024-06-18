#include <stdio.h>

main(){
    int a[3][4] = {
        {2, 4, 7, 9},
        {6, 9, 4, 9},
        {1, 0, 7, 4}
    };

    display(a, 3, 4);
    printf("\n");
    show(a, 3, 4);
    printf("\n");
    print(a, 3, 4);
}

display(int *q,int row,int colm){

    int i, j;
    for(i = 0; i < row ; i++){
        printf("\n");
        for(j = 0; j < colm; j++){
            printf("%d ", *(q+ i * colm + j));
        }
    }
    printf("\n");

}

show( int(*q)[4], int row, int colm){

    int i, j;
    int *p;
    for(i = 0; i < row; i++){
        p = q + i;
        for(j = 0; j < colm; j++){
            printf("%d ", *(p+j));
        }
        printf("\n");
    }
    printf("\n");
}

print(int q[][4], int row, int col){

    int i, j;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }
}