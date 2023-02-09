#include<stdio.h>

int main(){
    char s1[100], s2[100];
    scanf("%s %s",s1,s2);
    int len1 = 0,len2=0,i=0;
    while(s1[i] != '\0'){len1++;i++;}
    i = 0;
    while(s2[i] != '\0'){len2++;i++;}
    
    if(len1!=len2){
        puts("We can't compare");
        return 1;
    }
    i = 0;
    do{
        if(s1[i] == '\0'){
            puts("they are equal");
            return 0;
        }
        i++;
    }
    while(s1[i] == s2[i]);
    puts("there  not equal");
    return 1;

}