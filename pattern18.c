#include<stdio.h>
int main(){
    int i,j;
    char ch;
    for(i=0;i<4;i++){
        ch ='A';
        for(int j=0;j<=i;j++){
            printf("%c",ch);
            ch ++;
        }
        ch-=2;
        for(int j=0;j<i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
    
}