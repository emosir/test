#include <stdio.h>
int main(){
    int m,n,x;
    scanf("%d %d",&m,&n);

    x = m;
    m = n;
    n = x;
    printf("%d %d",m,n);
}
