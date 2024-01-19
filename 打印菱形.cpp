#include <stdio.h>
int main(){
	int n,i,a,b,k,x;
	scanf("%d",&n);
	k=(n-1)/2;
	x=1;
	if(n%2==0||n==1) printf("error");
	else{
		printf("print\n") ;
		for(i=0;i<n;i++){
			if(i<(n+1)/2){
				for(a=0;a<k;a++){
					printf(" ");
				}
				for(b=0;b<x;b++){
					printf("*");
				}
				k -=1;
				x +=2;
				printf("\n");
			}
			else{
				for(a=0;a<k+2;a++){
					printf(" ");
				}
				for(b=0;b<x-4;b++){
					printf("*");
				}
				k +=1;
				x -=2;
				printf("\n");
			}
		}
	}
	return 0;
}
