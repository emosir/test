#include <stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d,%d,%d",&a,&b,&c);
    a>b?x=a:x=b;
    x>c?x=x:x=c;
    printf("max=%d",x);
}
