#include <stdio.h>
int main(){
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	long long int a[n][n]={0},b[n][n],c[n][n];
	for(int i=0;i<n;i++){
		for(int t=0;t<n;t++){
			scanf("%lld",&a[i][t]);
		}
	}
	for(int i=0;i<n;i++){
		for(int t=0;t<n;t++){
		 b[i][t]=0;
		}
	}
	if(k==1){
		for(int i=0;i<n;i++){
			for(int t=0;t<n;t++){
			 b[i][t]=a[i][t];
			}
		}
	}else{
		for(int k1=0;k1<k-1;k1++){
		if(k1==0){
			for(int i=0;i<n;i++){
				for(int t=0;t<n;t++){
		 			c[i][t]=a[i][t];
				}
			}
		}else{
			for(int i=0;i<n;i++){
					for(int t=0;t<n;t++){
		 				c[i][t]=b[i][t];
					}
				}
			}
			for(int i=0;i<n;i++){
				for(int t=0;t<n;t++){
					b[i][t]=0;
				}
			}
			for(int i=0;i<n;i++){
				for(int t=0;t<n;t++){
					for(int q=0;q<n;q++){
						b[i][t] +=c[i][q]*a[q][t];
					}
				}
			}

		}
	}

	for(int i=0;i<n;i++){
		for(int t=0;t<n;t++){
			if(t<n-1){
				printf("%lld ",b[i][t]);
			}else{
				printf("%lld\n",b[i][t]);
			}
		}
	}
}
