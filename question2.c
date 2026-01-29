#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int sum=0;
    if(n<=1000){
        for (int i=1; i<=n; i++){
            sum =sum+i;
        }
        printf("%d",sum);
        
    }
}
