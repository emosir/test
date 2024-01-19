#include <stdio.h>
int main(){
	char i[100]={' '};
	int a=0,bol=1,x=0,y=0;
	
	for(;;){
		scanf("%c",&i[a]);
		if(i[a]=='\n'){
			break;
		}
		if(((int)i[a]>=(int)'a'&&(int)i[a]<=(int)'z')||((int)i[a]>=(int)'A'&&(int)i[a]<=(int)'Z')||(int)(i[a]>=(int)'0'&&(int)i[a]<=(int)'9')||(int)i[a]==(int)'_'||(int)i[a]==(int)'-'||(int)i[a]==(int)'@'||(int)i[a]==(int)'.');
		else{
			bol=0;
		}
		if(i[a]=='@'){
			x +=1;
		}
		if(i[a]=='.'){
			y +=1;
		}
		if(i[a]=='.'&&i[a-1]=='@'){
			bol=0;
		}
		a++;
	}
	if(i[0]=='@'||i[a-1]=='@'){
		bol=0;
	}
	if(x >1){
		bol=0;
	}
	if(y >1){
		bol=0;
	}
	if(i[a-1]=='.'){
		bol=0;
	}
	if(bol==1){
		printf("yes");
	}else if(bol==0){
		printf("no");
	}
}

