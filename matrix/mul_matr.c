#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    //  getting inputs for row1, col1 and row2, col2 of matrix A and B;
    puts("Enter r1, c1, r2, c2 : ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    //  checking
    if (r2 != c1){
        puts("we can't multiple two matrix");
        return 1;
    }    

    int a[r1][c1], b[r2][c2], c[r1][c2];
    // getting value for matrix a and b
    for (int i = 0; i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Enter the value of mat A [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            printf("Enter the value of mat B [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // multiplying

    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            c[i][j] = 0;
            for(int k = 0; k<r2; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // printing the matrix 
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}