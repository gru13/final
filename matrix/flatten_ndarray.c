#include<stdio.h>

int main(){
    int r1,c1;
    //  getting inputs for row1, col1 of matrix A
    puts("Enter r1, c1,: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1], c[r1*r2],p=0;
    //  'b' is flatten array and 'p' is index cursor of 'b'

    // getting value for matrix A
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("Enter the value of mat A [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            c[p] = a[i][j];
            p++;
        }
    }

    // printing the matrix 
    for (int i = 0; i < r1*c1; i++){
        printf("%d\t", c[i]);
    }

}