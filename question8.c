#include<stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int rev=0;
    int digit;
    for(int n=1; n!=0; n=n/10){
        digit = n%10;
        rev = rev*10+digit;
    }
        printf("%d",rev);
        
        return 0;
  
}