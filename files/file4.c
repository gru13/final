#include<stdio.h>
#include<process.h>

int main(){
    FILE *f, *f2;
    f = fopen("sample3.txt","r");
    f2 = fopen("sample3.txt", "a");
    if(f2 == NULL){
        puts("file can't be acessed");
        return 1;
    }

    int a , b;
    fscanf(f, "%d+%d=",&a,&b);
    fprintf(f2,"%d",a+b);
}