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
    char st[100];
    char *s = st;

    ch = fgetc(f);
     
    while(ch != EOF){
        *s = ch;
        s++;
        ch = fgetc(f);
    }  
    *s = '\0';
    puts(st);
}