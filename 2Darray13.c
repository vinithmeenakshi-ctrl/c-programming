#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }

    int count=0;
    for(int i=0;i<r;i++){
        int palindrom=1;
        int j=0,k=c-1;

        while(j < k){
            if(a[i][j]!=a[i][k]){
                palindrom=0;
                break;
            }
            j++;
            k--;
        }

        if(palindrom) {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
