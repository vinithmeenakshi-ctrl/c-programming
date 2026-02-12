#include<stdio.h>
void swap(int*a,int*b){
int temp=*a;
    *a = *b;
    *b = temp;


}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    printf("before swapping\n,%d %d",a,b);

    swap(&a,&b);
    printf("after swapping\n %d %d",a,b);
    return 0;


}