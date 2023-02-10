#include<stdio.h>
#include<process.h>

int main(){
    FILE *f1, *f2, *f3;
    
    f1 = fopen("sample.txt","r");
    f2 = fopen("sample1.txt","r");
    f3 = fopen("sample2.txt","w");

    if(f1 == NULL || f2 == NULL){
        puts("one of the source file is not opening");
        return 1;
    }
    
    if(f2 == NULL){
        puts("Destination file is not opening");
        return 1;
    }

    char ch1, ch2;
    
    ch1 = fgetc(f1);
    ch2 = fgetc(f2);

    while(ch1 != EOF){
            fputc(ch1,f3);
            ch1 = fgetc(f1);
        }

    while(ch2 != EOF){
            fputc(ch2,f3);
            ch2 = fgetc(f2);
        }
    
    puts("sucess");
}
