#include <stdio.h> 
int main(){
	int n,t=0,m=0;
	scanf("%d",&n);
	int a[21]={0};
	int b[100],num1=0,num[n];
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		a[num[i]] +=1;
	}
	for(int i=0;i<n;i++){
		if(a[num[i]]==2){
			t=1;
			for(int t=0;t<num1;t++){
				if(b[t]==num[i]){
					m=1;
				}
			}
			if(m==0){
				b[num1]=num[i];
				num1++;
				
			}
		}
	}
	if(t==0){
		printf("none");
	}else{
		for(int i=0;i<num1;i++){
			if(i<num1-1){
				printf("%d ",b[i]);
			}else{
				printf("%d",b[i]);
		}
	}
	}
	return 0;
}
