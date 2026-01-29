#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int c,n;
    scanf("%d",&n);
    ptintf("%d",a);
    printf("%d",b);
    for(int i=2; i<n; i++ ){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
    }
    return 0;

}