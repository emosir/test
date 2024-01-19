#include <stdio.h>
int main(){
	int m,n,x=1;
	scanf("%d",&m);
	int i[m],b[m];
	for(n=0;n<m;n++){
		scanf("%d",&i[n]);
		b[n]=i[n];
		if(i[n]<0) i[n]=-i[n];
	}
	for(n=1;n<m;n++){
		i[n]>i[n-1]?i[n]=i[n]:i[n]=i[n-1];
	}
	for(n=0;n<m;n++){
		if(i[m-1]==b[n]){
			x=0;
			printf("%d",i[m-1]);
		}
	}
	if(x) printf("%d",-i[m-1]);
	return 0;
}
