#include <iostream>
#include <stdio.h>
class obj{
public:
	int n;
	void he();
};
void obj::he(){
	int a[4];
	for(int i=0;i<4;i++){
		a[i]=n%10;
		n=(n-a[i])/10;
	}
	printf("%d",a[0]*a[0]+a[1]*a[1]+a[2]*a[2]+a[3]*a[3]);
}
int main(){
	obj obj1;
	scanf("%d",&obj1.n);
	obj1.he();
}
