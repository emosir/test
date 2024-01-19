#include <stdio.h>
int main(){
    float a;
    int x;
    scanf("%f",&a);

    x =  a;
    if (a>=0){
        a = a-x;
        if (a>=0.5){
            printf("%d",x+1);
        }else{
            printf("%d",x);
    }
    }
    if (a<0){
        a = a-x;
        if (-a>=0.5){
            printf("%d",x-1);
        }else{
            printf("%d",x);
    }
    }
}
