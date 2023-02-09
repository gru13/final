#include<stdio.h>
#include<math.h>

int main(){
    int a, l=0,len=0;
    scanf("%d", &a);
    len = log10(a);
    while(len>-1){
        l+=(a%10)*pow(10,len);
        a /=10;
        len--;
    }
    printf("%d", l);
}