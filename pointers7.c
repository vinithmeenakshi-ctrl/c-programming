#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int *start=arr;
    int *end = arr+size-1;
    while(start < end){
        if(*start!=*end){
            printf("no");
            return 0;
        }
        start++;
        end--;

    }
    printf("yes");
    return 0;






}