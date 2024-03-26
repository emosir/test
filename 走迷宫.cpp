#include <iostream>
#include <stdio.h>
class obj{
public:
	int n;
	int m;
	char mi[100][100];
	void ask(); 
};
void obj::ask(){
	int x,y,step;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&step);
	int x1=x-1;
	int y1=y-1;
	for(int i=0;i<step;i++){
		if((int)mi[x1][y1]==(int)'U'){
			if(x1==0){
				x1=n-1;
			}else{
				x1--;
			}
		}
		else if((int)mi[x1][y1]==(int)'D'){
			if(x1==n-1){
				x1=0;
			}else{
				x1++;
			}
		}
		else if((int)mi[x1][y1]==(int)'L'){
			if(y1==0){
				y1=m-1;
			}else{
				y1--;
			}
		}
		else if((int)mi[x1][y1]==(int)'R'){
			if(y1==m-1){
				y1=0;
			}else{
				y1++;
			}
		}
	}
	printf("%d %d\n",x1+1,y1+1);
}
int main(){
	obj obj1;
	int q;
	scanf("%d",&obj1.n);
	scanf("%d",&obj1.m);
	getchar();
	for(int i=0;i<obj1.n;i++){
		fgets(obj1.mi[i],sizeof(obj1.mi[i]),stdin);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		obj1.ask();
	}
	return 0;
}
