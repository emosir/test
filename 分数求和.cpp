#include <stdio.h>
int f(int *a,int *b){
	int q[1000]={0},p[1000]={0},m=0,n=0,num=1;
	if(*a<0){
		*a=-(*a);
		 for(int i=1;i<=*a;i++){
		if(*a%i==0){
			q[m]=i;
			m++;
		}
		if(*b%i==0){
			p[n]=i;
			n++;
		}
	}
	for(int i=0;i<m;i++){
		for(int t=0;t<n;t++){
			if(q[i]==p[t]){
				num=q[i];
			}
		}
	}
	*a=-(*a/num);
	*b=*b/num;
	}else{
	
	for(int i=1;i<=*a;i++){
		if(*a%i==0){
			q[m]=i;
			m++;
		}
		if(*b%i==0){
			p[n]=i;
			n++;
		}
	}
	for(int i=0;i<m;i++){
		for(int t=0;t<n;t++){
			if(q[i]==p[t]){
				num=q[i];
			}
		}
	}
	*a=*a/num;
	*b=*b/num;
	}
	return 0;
}
int main(){
	int n,bol=0;
	scanf("%d",&n);
	int a[n],b[n],*pa,*pb;
	for(int i=0;i<n;i++){
		scanf("%d/%d",&a[i],&b[i]);
		
		if(b[i]==0){
			bol=1;
		}
		if(i>0){
			a[i]=a[i-1]*b[i]+a[i]*b[i-1];
			b[i]=b[i]*b[i-1];
            	pa=&a[i];
            	pb=&b[i];
              	f(pa,pb);
		}
	}
	pa=&a[n-1];
	pb=&b[n-1];
	f(pa,pb);
	if(bol==1){
		printf("error");
	}else{
		if(*pb==1){
			printf("%d",*pa);
		}else if(*pa==0){
			printf("0");
		}else{
			printf("%d/%d",*pa,*pb);
		}
	}
}

