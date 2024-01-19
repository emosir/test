#include <stdio.h>
int main(){
	int num=0;
	char i;
	for(;i != '\n';){
		scanf("%c",&i);
		num ++;
	}
	printf("%d",num-1);
	return 0;
}
