#include <stdio.h>

int main() {
    int n,i,a,b;

    scanf("%d", &n);  // 有n组数据
    int num[n];
    for (i = 0; i < n; i++) {
        //请在此处书写代码
        scanf("%d",&num[i]);
        if(num[i]==1){
            num[i]=0;
        }
        else if(num[i]==2){
            num[i]=1;
        }
        else{
            for(a=2;a<num[i];a++){
            if(num[i]%a==0){
                num[i]=0;
                break;
            }
            else{
                num[i]=1;
            }
        
            }
        }
        
    }
    for (b = 0; b < n; b++){
            if(num[b]==1){
                printf("yes\n");
            }
            else{
                printf("no\n");
			}
	}
    return 0;
}
