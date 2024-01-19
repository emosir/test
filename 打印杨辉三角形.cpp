#include <stdio.h>
int main(){
	int n,num;
	int a;
	scanf("%d",&n);
	for(a=0;a<n;a++){
		scanf("%d",&num);
		int arr[num][num];
		for(int i=0;i<num;i++){
			if(i==0||i==1){
				arr[i][0]=1;
				arr[i][i]=1;
			}else{
				arr[i][0]=1;
				arr[i][i]=1;
				for(int b=1;b<i;b++){
					arr[i][b]=arr[i-1][b]+arr[i-1][b-1];
				}
			}
			for(int c=0;c<=i;c++){
				if(c!=i){
					printf("%d ",arr[i][c]);
				}else{
					printf("%d\n",arr[i][c]);
				}
			}
		}
	}
	return 0;
}
