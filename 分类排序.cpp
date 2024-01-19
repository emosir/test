#include <stdio.h>
int f(int i[],int n){
	for(int t=n;t>1;t--){
		for(int num=1;num<t;num++){
			if(i[num]>=i[num-1]);
			if(i[num]<i[num-1]){
				int num1=i[num];
				i[num]=i[num-1];
				i[num-1]=num1;
			}
		}
	}
	return 0;
}
int main(){
	int n,num[50]={0},a[50][50]={0},b[50][50]={0},c;
	scanf("%d\n",&n);
	int q=0,p=0,a1[50]={0},b1[50]={0};
	for(int i=0;i<n;i++){
		int t=0,p=0,q=0;
		while (1){
			scanf("%d",&c);
			num[t]=c;
			if(num[t]%2==0){
				a[i][q]=num[t];
				q++;
			}else{
				b[i][p]=num[t];
				p++;
			}
			t++;
			if(getchar()=='\n'){
				break;
			}
		}
		a1[i]=q;
		b1[i]=p;
		f(a[i],q);
		f(b[i],p);
	}
	for(int i=0;i<n;i++){
		for(int t=0;t<b1[i];t++){
			printf("%d ",b[i][t]);
		}
		for(int t=0;t<a1[i];t++){
			if(t<a1[i]-1){
				printf("%d ",a[i][t]);
			}else{
				printf("%d\n",a[i][t]);
			}
		}
	}
}
