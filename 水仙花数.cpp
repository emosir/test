#include <stdio.h>
int main(){
	int t,num,m,n,i[3],x[100]={0},y[100][100]={0},a=0;
	scanf("%d",&t);
	for(num=0;num<t;num++){
		a=0;
		scanf("%d %d",&m,&n);
		for(;m<=n;m++){
			i[0]=m%10;
			i[1]=m/10;
			i[1]=i[1]%10;
			i[2]=m/100;
			i[2]=i[2]%10;
			if(m==i[0]*i[0]*i[0]+i[1]*i[1]*i[1]+i[2]*i[2]*i[2]){
				x[num]=1;
				y[num][a]=m;
				a++;
			}
		}
	}
	for(num=0;num<t;num++){
		if(x[num]==0){
			printf("-1\n");
		}else{
			for(a=0;a<100;a++){
				if(y[num][a]==0) break;
				printf("%d ",y[num][a]);
			}
			printf("\n");
		}
	}
	return 0;
}
