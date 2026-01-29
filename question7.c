#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            num=num+i;
        }
     

    }
    printf("%d",num);
}