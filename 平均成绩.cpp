#include <stdio.h>
int main(){
    int n,a,b,x;
    scanf("%d",&n);
    int i[n][4];
    for(a=0;a<n;a++){
        scanf("%d %d %d %d",&i[a][0],&i[a][1],&i[a][2],&i[a][3]);
    }
    for(b=0;b<n;b++){
        printf("%.2f\n",(float)(i[b][1]+i[b][2]+i[b][3])/3);
    }
}
