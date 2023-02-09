#include<stdio.h>
#include<process.h>

int main(){
    FILE *f1, *f2;
    f1 = fopen("sample.txt","r");
    f2 = fopen("sample1.txt","w");
    if(f1==NULL){
        puts("Ygbhvjnm");
        return 1;
    }
    if(f2==NULL){
        puts("Ygbhvjnm");
        return 1;
    }
    char ch;
    ch = fgetc(f1); 
    while(ch != EOF){
        fputc(ch,f2);
        ch = fgetc(f1);
    }   
}