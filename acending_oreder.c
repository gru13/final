#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int len;
    //  getting the value for 2 array
    printf("Enter thr len of Arr 'A','B' : ");
    scanf("%d", &len);
    int a[len];
    
    //  getting the values for array
    for(int i = 0; i<len; i++){
        printf("Enter the value for array a[] : ", i);
        scanf("%d",&a[i]);
    }

    for(int i = 0;i<len-1;i++){
        for(int j = 0;j<len-i;j++){
            if (a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
    //  printing the final array 
    puts("The value of combained array :\t");
    for(int i = 0; i<len; i++){
        printf("%d\t",a[i]);
    }

}