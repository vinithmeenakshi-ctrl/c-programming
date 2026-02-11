#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);


    int i;int count=0; 

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0'&& str[i]<='9'){
            count++;
        }
        
    }
    printf("%d\n",count);
    return 0;
}