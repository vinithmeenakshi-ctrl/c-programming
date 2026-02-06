#include<stdio.h>
int main(){

    int i,n;
    scanf("%d",&n);

    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int k =1;

    for(i=0;i<n/2;i++){
        if(a[i] !=a[n - 1 - i]){
            k = 0;
            break;
        }
    }
    if(k){
        printf("yes\n");
    }
    else{
        printf("No\n");
    }

}