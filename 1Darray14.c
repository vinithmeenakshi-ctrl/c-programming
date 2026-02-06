#include<stdio.h>
int main(){

    int n,i;
    int price=0;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        int small = 0;
        if(small <= price){
        printf("%d",a[i]);
        return 0;

    }
}
    
        printf("no positive");
    
    return 0;
}
