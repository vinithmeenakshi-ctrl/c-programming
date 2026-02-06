#include<stdio.h>
int main(){

    int n,i,j;
    scanf("%d",&n);
   


    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=1;

    for(i=0;i<n;i++){
        for(j=i+1;j<i;j++){
            if(a[i]==a[j]){
                (a[i]>=min);
                min=a[i];
                  printf("%d",a[i]);
    }
}
               
                
            

     }
       return 0;
    }