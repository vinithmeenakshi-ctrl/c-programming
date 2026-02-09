#include<stdio.h>
int main(){

    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int ref =0;
    for(int i=0;i<r;i++){



        for(int j=0;j<c;j++){
            int occ = 0;
            int current = a[i][j];
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(a[x][y] == current){
                    occ++;
                }
            }
            }

            if(occ>1){
                printf("%d",current);
                ref =1;
                break;
            }
        }
        if(ref)break;

    }
    return 0;
}
