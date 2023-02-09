#include<stdio.h>

int main(){
    char sj[100];
    scanf("%s", &sj);
    int len = 0;
    while(sj[len]!='\0'){len++;}
    for(int i = 0 ;i < (len/2) ; i++){
        if (sj[i] != sj[len-1-i]){
            puts("not pallind");
            return 1;
        } 
    }
    puts("pallindron");
    return 0;
}