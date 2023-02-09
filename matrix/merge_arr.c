#include<stdio.h>

int main(){
    int len_a,len_b;
    //  getting the value for 2 array
    printf("Enter thr len of Arr 'A','B' : ");
    scanf("%d %d", &len_a, &len_b);
    int a[len_a], b[len_b], c[len_a+len_b];
    
    //  getting the values for array
    for(int i = 0; i<len_a; i++){
        printf("Enter the value for array a[] : ", i);
        scanf("%d",&a[i]);
        c[i] = a[i];
    }

    for(int i = 0; i<len_b; i++){
        printf("Enter the value for array b[] : ", i);
        scanf("%d",&b[i]);
        c[i+len_a] = b[i];
    }
    
    //  printing the final array 
    puts("The value of combained array :\t");
    for(int i = 0; i<len_a+len_b; i++){
        printf("%d\t",c[i]);
    }

}