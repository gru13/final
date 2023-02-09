#include<stdio.h>

int main(){
    char a[99], b[99], c[99+99];
    scanf("%[^\n]%*c", a);
    scanf("%[^\n]%*c", b);
    int i = 0, j=0;
    while(a[i]!='\0'){
        c[i] = a[i];
        i++;
    } 
    while(b[j]!='\0'){
        c[i] = b[j];
        i++;
        j++;
    }
    puts(c);
}