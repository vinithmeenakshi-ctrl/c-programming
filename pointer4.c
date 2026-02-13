#include <stdio.h>

int main(){
    char s1[100],s2[100];
    char *p1,*p2;
    fgets(s1,sizeof(s1),stdin);

    p1=s1;
    p2=s2;

    while(*p1) {
        *p2=*p1;
        p1++;
        p2++;
    }

    *p2='\0';

    printf("%s",s2);

    return 0;
}
