#include<stdio.h>
#include<process.h>

int main(){
    FILE *f;
    f = fopen("sample.txt","r");
    if(f==NULL){
        puts("Ygbhvjnm");
        return 1;
    }
    char ch;
    ch = fgetc(f); 
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(f);
    }   
}