#include <iostream>
#include <stdio.h>
#include <string.h>
class obj{
public:
	char s1[100];
	char s2[50];
	void ask();
};
void obj::ask(){
	int n1,n2,b1,b2,a,b,bo1=0,bo2=0;
	n1=strlen(s1);
	n2=strlen(s2);
	b1=0;
	b2=0;
	for(int i=0;i<n1;i++){
		int t=0;
		if((int)s1[i]==(int)s2[t]&&b1==0){
			b1=1;
			for(;t<n2;t++){
				if((int)s1[i+t]!=(int)s2[t]){
					b1=0;
				}
			}
		}
		if(b1==1&&bo1==0){
			a=i+t-1;
			bo1=1;
		}
	}
	for(int i=n1-1;i>=0;i--){
		int t=0;
		if((int)s1[i]==(int)s2[t]&&b2==0){
			b2=1;
			for(;t<n2;t++){
				if((int)s1[i-t]!=(int)s2[t]){
					b2=0;
				}
			}
		}
		if(b2==1&&bo2==0){
			b=i-t+1;
			bo2=1;
		}
		
	}
	if(b1==1&&b2==1&&b-a>-(n2-1)){
		printf("%d",b-a-1);
	}else{
		printf("no");
	}
}
int main(){
	obj obj1;
	scanf("%s",obj1.s1);
	scanf("%s",obj1.s2);
	obj1.ask();
	return 0;
}
