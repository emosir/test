#include <stdio.h>
int main(){
	int n,num,a[1000]={0},b[1000]={0},t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num>=0){
			b[num]++;
		}else{
			num= -num;
			a[num]++;
		}
	}
	for(int i=0;i<1000;i++){
		if(b[i]!=0){
			t++;
		}
		if(a[i]!=0){
			t++;
		}
	}
	printf("%d",t);
}
