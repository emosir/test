#include <stdio.h>
int main(){
	int n,b=0,x=0,m;
	scanf("%d",&n);
	int num[n],num1[100];
	for(int a=0;a<n;a++){
		scanf("%d",&num[a]);
		if(num[a]%3==0){
			b=1;
			num1[x]=num[a];
			x++;
		}
	}
	if(b){
		for(m=1;m<x;m++){
			num1[m]<num1[m-1]?num1[m]=num1[m]:num1[m]=num1[m-1];
		}
		printf("%d",num1[m-1]);
	}else{
		printf("Null");
	}
	return 0;
}
