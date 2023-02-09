#include<stdio.h>

int main(){
    int i =0, j=0;
    char A[100], B[100], C[300];
    scanf("%s", A);
    scanf("%s", B);
    char *a = A;
    char *b = B;
    char *c = C;
    while(*(a+i) != '\0'){
        *(c+i) = *(a+i);
        i++;
    }
    while(*(b+j) != '\0'){
        *(c+i) = *(b+j);
        i++;
        j++;
    }
    printf("%s", C);
}