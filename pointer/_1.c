#include<stdio.h>

int main(){
    int n;
    int *np;
    n = 5;
    np = &n; 
    printf("%d %d", np, &n);
}