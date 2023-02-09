#include<stdio.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    char s[100];
    scanf("%[^\n]%*c",s);
    int len = 0,i=0;
    while(s[i] != '\0'){len++;i++;}
    printf("%d\n", len);
    for(i=0;i<len/2;i++){
        swap(&s[i],&s[len-i-1]);
    }
    for(i=0;i<len;i++){
        printf("%c",s[i]);
    }
}