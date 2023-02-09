#include<stdio.h>

int main(){
    char A[100], B[100], C[300];
    scanf("%[^\n]%*c", A);
    scanf("%[^\n]%*c", B);

    char *a = A;
    char *b = B;
    char *c = C;
    
    while(*(a) != '\0'){
        *(c) = *(a);
        a++;
        c++;
    }
    while(*(b) != '\0'){
        *(c) = *(b);
        c++;
        b++;
    }
    printf("%s", C);
}