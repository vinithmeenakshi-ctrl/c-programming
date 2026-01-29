#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    for(; a!=0;a=a/10){
        int num =a%10;
        count++;
       
        
    }
   printf("%d",count);
}