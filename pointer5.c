#include<stdio.h>
int main(){
    int n,i,sum=0;
    int a[100];
    int *str;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    str=a;

    for(i=0;i<n;i++){
        sum = sum+*str;
        str++;
    }
    printf("sum=%d",sum);

    return 0;
}