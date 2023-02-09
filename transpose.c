#include<stdio.h>

int main(){
    int r1,c1;
    //  getting inputs for row1, col1 of matrix A
    puts("Enter r1, c1,: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1], b[c1][r1];

    // getting value for matrix A
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("Enter the value of mat A [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];

        }
    }

    for (int i = 0; i < c1; i++){
        for(int j = 0; j < r1; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}