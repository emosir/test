#include <stdio.h>
int f(int n,int b[]){
	for(int i=n-1;i>=1;i--){
		for(int t=1;t<=i;t++){
			int num=0;
			if(b[t]<b[t-1]){
				num=b[t-1];
				b[t-1]=b[t];
				b[t]=num;
			}
		}
	}
	return b[(n-1)/2];
}
int main(){
	int n=3,a;
	int b[n]={1,2,3};
	a=f(n,b);
	printf("%d",a);
	return 0;
}
