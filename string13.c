#include<stdio.h>
int main(){

    char str[100];
    char target;
    int index=-1;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
        scanf(" %c",&target);
    
        for(int i=0;str[i]!='\0';i++){
            if(str[i]==target){
               index=i;
               break;
            }
        }
    
    printf("%d\n",index);
    return 0;
}