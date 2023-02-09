#include<stdio.h>

//  function for swap 

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int len;
    //  getting the value for len of array
    printf("Enter thr len of Arr 'A': ");
    scanf("%d", &len);
    int a[len];
    int f = len - 1;
    //  getting the values for array
    for(int i = 0; i<len; i++)
    {
        printf("Enter the value for array a[%d] : ", i);
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<len/2;i++)
    {
        swap(&a[i], &a[f]);
        f--;
    }
    //  printing the final array 
    puts("The value of combained array :\t");
    for(int i = 0; i<len; i++){
        printf("%d\t",a[i]);
    }

}