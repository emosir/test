#include <stdio.h>
int main(){
	int a[10]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);
			a[i] -=1;
			break;
		}else{
			continue;
		}
	}
	for(int i=0;i<10;i++){
		for(int b=0;b<a[i];b++){
			printf("%d",i);
		}
	}
}
