#include<stdio.h>
int main(){
    int n=5;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",m);
            if(m==1){
                m=0;
            }
             else {
               m=1;
            }
        }
        printf("\n");
    }
    return 0;
}