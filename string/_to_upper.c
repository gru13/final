#include<stdio.h>

int main(){
    //  a  = 97 and z = 123
    //  if  ch>=9 && ch<=65+26;
    //         return ch + 32 
    char s[100];
    scanf("%[^\n]%*c", s);
    int i = 0;
    while(s[i]!='\0'){
        if (s[i]>=97 && s[i] <= 97+25){
            s[i] = s[i] - 32;
        }
        i++;
    }
    puts(s);
}