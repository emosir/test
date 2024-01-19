#include <stdio.h>
#include <math.h> 
int main(){
	int m,n;
	float a;
	scanf("%d",&m);
	int i[m];
	for(n=0;n<m;n++){
		scanf("%d",&i[n]);
	}
	for(n=0;n<m;n++){
		if(i[n]<0) printf("ERROR\n");
		else{
			a=sqrt((float)i[n])	;
			printf("%.2f\n",a);
		}
	}
	return 0;
}
