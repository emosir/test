#include <stdio.h>
int f(int x){
	if(x%400!=0) 
		if(x%100==0||x%4!=0){
		return 0;
	}
	else if(x%100!=0&&x%4==0){
		return 1;
	}
}//ÅÐ¶ÏÊÇ·ñÈòÄê
int day(int y,int m){
	switch(m){
		case 1:
			return 31;
		case 2:
			if(f(y)){
				return 29;
			}else{
				return 28;
			}
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		case 12:
			return 31;
	}
	return 0;
}//ÅÐ¶ÏÃ¿ÔÂµÄÌìÊý 
int f1(int a,int b,int c){
	int bol=1;
	if(!(a>=0&&a<=99)) bol=0;
	if(!(b>=1&&b<=12)) bol=0;
	if(!(c>=1&&c<=day(a+2000,b))) bol=0;
	return bol;
}//ÅÐ¶ÏÊÇ·ñÂú×ãyy/mm/dd
int f2(int a,int b,int c){
	int bol=1;
	if(!(c>=0&&c<=99)) bol=0;
	if(!(a>=1&&a<=12)) bol=0;
	if(!(b>=1&&b<=day(c+2000,a))) bol=0;
	return bol;
}//ÅÐ¶ÏÊÇ·ñÂú×ãmm/dd/yy 
int main(){
	int a,b,c,bol1,bol2;
	scanf("%d/%d/%d",&a,&b,&c);
	bol1=f1(a,b,c);
	bol2=f2(a,b,c);
	if(bol1==1&&bol2==0){
		switch(b){
			case 1:printf("January ");
			break;
			case 2:printf("February ");
			break;
			case 3:printf("March ");
			break;
			case 4:printf("April ");
			break;
			case 5:printf("May ");
			break;
			case 6:printf("June ");
			break;
			case 7:printf("July ");
			break;
			case 8:printf("August ");
			break;
			case 9:printf("September ");
			break;
			case 10:printf("October ");
			break;
			case 11:printf("November ");
			break;
			case 12:printf("December ");
			break;
		}
		printf("%d, %d",c,a+2000);
	}else if((bol1==0&&bol2==1)||(a==b&&b==c)){
		switch(a){
			case 1:printf("January ");
			break;
			case 2:printf("February ");
			break;
			case 3:printf("March ");
			break;
			case 4:printf("April ");
			break;
			case 5:printf("May ");
			break;
			case 6:printf("June ");
			break;
			case 7:printf("July ");
			break;
			case 8:printf("August ");
			break;
			case 9:printf("September ");
			break;
			case 10:printf("October ");
			break;
			case 11:printf("November ");
			break;
			case 12:printf("December ");
			break;
		}
		printf("%d, %d",b,c+2000);
	}else{
		int rest=0,dd,more=0,all=0;
		if(a>c){
			for(int i=1;i<=a;i++){   
				rest += day(c+2000,i);
			}
			rest -= day(c+2000,a)-b;
			if(f(c+2000)){
				rest = 366-rest;
			}else{
				rest =365-rest;
			}
			for(int i=1;i<=b;i++){   
				more += day(a+2000,i);
			}
			more -= day(a+2000,b)-c;
			for(int i=c+2001;i<=a+1999;i++){
				if(f(i)){
					all +=366;
				}else{
					all += 365;
				}
			}
			dd=rest+all+more;
			printf("%d",dd);
		}
		if(a<c){
			for(int i=1;i<=b;i++){   
				rest += day(a+2000,i);
			}
			rest -= day(a+2000,b)-c;
			if(f(a+2000)){
				rest = 366-rest;
			}else{
				rest =365-rest;
			}
			for(int i=1;i<=a;i++){   
				more += day(c+2000,i);
			}
			more -= day(c+2000,a)-b;
			for(int i=a+2001;i<=c+1999;i++){
				if(f(i)){
					all +=366;
				}else{
					all += 365;
				}
			}
			dd=rest+all+more;
			printf("%d",dd);
		}
		if(a==c){
			for(int i=1;i<=a;i++){   
				rest += day(c+2000,i);
			}
			rest -= day(c+2000,a)-b;
			for(int i=1;i<=b;i++){   
				more += day(a+2000,i);
			}
			more -= day(a+2000,b)-c;
			if((more-rest)>=0){
				printf("%d",more-rest);
			}else{
				printf("%d",rest-more);
			}
		}
	}
}

