#include<stdio.h>
int main(){

    int i,n;
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min_price =a[0];
    int maxDiff = a[1];


    for(i=0;i<n;i++){
        if(a[i]- min_price> maxDiff){
            maxDiff = a[i] - min_price;
        }
        if(a[i] < min_price){
            min_price = a[i];
        }
    }
    printf("%d",maxDiff);
    return 0;

    
        return 0;

    }
