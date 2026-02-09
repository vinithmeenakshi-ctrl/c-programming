#include <stdio.h>

int main() {
    int r, c;
    int a[r][c];
     scanf("%d %d", &r, &c);
    int sum, maxSum, minSum;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    sum = 0;

    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            int min =0;
            int max =0;
            sum += a[0][j];
        

        if(a[i][j]<min){
            min=a[i][j];
            min++;
        }
        else if(a[i][j]>max){
            max =[0][j];
            max++;
        }

    }

    }
    
}
