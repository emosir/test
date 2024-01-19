#include <stdio.h>
int main(){
	int a,n,sum=0,i,y,z=0;
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++){
		int num =1,z=0;
		for(int x=0;x<i+1;x++){
			y = a*num;
			z +=y;
			num *=10;
		}
		sum +=z;
	}
	printf("%d",sum);
	return 0;
} 
