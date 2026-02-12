#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);
    int arr[size];


    printf("print the elements");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

   int *p = arr;
   int max = *p;
    for(int i=1;i<size;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    printf("%d",max);
    return 0;




}