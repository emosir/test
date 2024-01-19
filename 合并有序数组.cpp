#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[100]={0},b[100]={0};
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	int x[100]={0};
	int p=0,q=0;
	for(int i=0;i<m+n;i++){
		if(a[q]<=b[p]&&q<m){
			x[i]=a[q];
			q++;
		}else{
			if(p<n){
				x[i]=b[p];
				p++;
			}else{
				x[i]=a[q];
				q++;
			}
		}
	}
	for(int i=0;i<m+n;i++){
		if(i<m+n-1){
			printf("%d ",x[i]);
		}else{
			printf("%d",x[i]);
		}
	}
}
