#include <stdio.h>
int main(){
	int n,num,o[100]={0},y,c[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		int num1=0,x=num;
		for(x;x>0;){
			o[num1]=x%10;
			x /=10;
			num1++;
		}
		y=num1;
		for(int a=0;a<=y-1;){
			if(o[a]==o[num1-1]){
				a++;
				num1--;
			}else{
				c[i] +=1;
				a++;
				num1--;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]/2==1)printf("yes\n");
		else {
		printf("no\n");
		}
	}
	
}
