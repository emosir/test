#include <stdio.h>
int f(int a,int *p){
	for(int i=2;i<a;i++){
		if(a%i==0){
			*p=1;
		}
	}
	return 0;
}
int main(){
	int n,a=0,*p=&a;
	scanf("%d",&n);
	if(n<=6||n%2 !=0){
		printf("ERROR\n");
	}else{
		for(int i=3;i<=n/2;i=i+2){
			*p=0;
			f(i,p);
			f(n-i,p);
			if(*p==0){
				printf("%d %d\n",i,n-i);
			}
		}
	}
}
