#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }

    int *first=&arr[0];
    int *last=&arr[size-1];
    int temp = *first;
    *first = *last;
    *last=temp;

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);

    }
    return 0;


}
