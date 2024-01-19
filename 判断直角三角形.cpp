#include <stdio.h>
int main(){
	int a,b,c;
	int num,n;
	scanf("%d",&n);
	int i[n]={0};
	for(num=0;num<n;num++){
		scanf("%d %d %d",&a,&b,&c);
		
		if(c*c==a*a+b*b){
			i[num]=1;
		}
		if(a<=0){
			i[num]=0;
		} 
	}
	for(num=0;num<n;num++){
		if(i[num]) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
