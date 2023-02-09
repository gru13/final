#include<stdio.h>

void disp(int a[],int s){
    for(int i = 0; i<s;i++){
        printf("%d\t", a[i]);
    }
}

int main(){
    int a[] = {1,23,4,5,6,6};
    disp(a,6);
}