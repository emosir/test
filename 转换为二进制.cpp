#include <iostream>
#include <stdio.h>
class obj{
public:
	int n;
	void ask();
};
void obj::ask(){
	int a[100]={0};
	printf("%d=",n);
	int i=0;
	for(;n>0;){
		a[i]=n%2;
		n=(n-a[i])/2;
		i++;
	}
	int b=0;
	for(int m=i-1;m>=0;m--){
		if(a[m]==1&&b==1){
			printf("+2^%d",m);
		}
		if(a[m]==1&&b==0){
			printf("2^%d",m);
			b=1;
		}
	}
}
int main(){
	obj obj1;
	scanf("%d",&obj1.n);
	obj1.ask();
}
