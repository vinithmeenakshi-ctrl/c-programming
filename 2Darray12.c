#include<stdio.h>
int main(){

    int r,c;
    scanf("%d %d",&r,&c);
    int count = 0;
    int max =0; 
    int frequent = 0;

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            count =0;
        
        for(int k=0;k<r;k++){
            for(int l=0;l<c;l++){
                if(a[i][j]==a[k][l]){
                    count++;
                }
            }
        
        }
        if(count>max){
            max=count;
            frequent=a[i][j];
        }
    }
}
    printf("%d",frequent);
    return 0;
}

