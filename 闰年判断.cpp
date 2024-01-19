#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year>0){
        if(year%100==0&&year%400!=0){
            printf("no");
        }
        else if(year%4==0){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("no");
    }
    return 0;
}
