#include <stdio.h>
int main(){
	int n,a[100]={0};
	scanf("%d",&n);
	int bol[n]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==1||a[i]==2){
			bol[i]=1;
		}else if(a[i]<=0);
		else{
			for(;a[i]!=1;){
				if(a[i]%2==0){
					a[i] /=2;
				}else if(a[i]%3==0){
					a[i] /=3;
				}else if(a[i]%5==0){
					a[i] /=5;
				}else break;
			}
			if(a[i]==1){
				bol[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(bol[i]==1){
			printf("true\n");
		}else{
			printf("false\n");
		}
	}
}
