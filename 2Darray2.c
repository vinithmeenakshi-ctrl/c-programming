#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max=0;
    int second_max =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]< max){
                max = arr[i][j];

            }
            else if(arr[i][j]< second_max){
                second_max = arr[i][j];

            }

}

    }
    printf("%d",max*second_max);
    return 0;
}