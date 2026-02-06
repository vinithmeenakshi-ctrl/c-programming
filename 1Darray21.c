#include<stdio.h>
int main(){

    int n,i,j;
    scanf("%d",&n);


    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

   int result = -1;

   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            result=a[i];
            printf("%d",a[i]);
            return 0;
            
        }
    }
   }
   printf("-1");
   return 0;



   
}

    



    






