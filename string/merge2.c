#include<stdio.h>

int main(){
    char a[100], b[100], c[200];

    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);

    int len1 = 0, len2 = 0;
    
    while(a[len1]!='\0'){len1++;}
    while(b[len2]!='\0'){len2++;}

    for (int i = 0; i<len1;i++){
        c[i] = a[i];
    } 
    for (int i = 0; i<len2-1;i++){
        c[i+len1] = b[i];
    } 
    puts(c);
    // char *p = a;
    // char *q = b;
    // char *r = c;

    // while(*p != '\0'){
    //     *r = *p;
    //     p++;
    //     r++;
    // }

    // while(*q != '\0'){
    //     *r = *q;
    //     q++;
    //     r++;
    // }
    // printf("%s",c);
}