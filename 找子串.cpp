#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char ch[100],ch1[50];
	fgets(ch,sizeof(ch),stdin);
	scanf("%s",&ch1);
	for(int i=0;ch[i] !='\0';i++){
		int k=0,j=i,bol=0;
		if(tolower(ch[j])==tolower(ch1[k])){
			bol=2;
			for(k=0;ch1[k] != '\0';k++){
				if(tolower(ch[j])!=tolower(ch1[k])){
					bol=1;
				}
				j++;
			}
		}
		if(bol==0||bol==1){
			printf("%c",ch[i]);
		}
		if(bol==2){
			printf("/*");
			for(int a=i;a<j;a++){
				printf("%c",ch[a]);
			}
			printf("*/");
			i=j-1;
		}
	}
}
