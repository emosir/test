#include<stdio.h>
int main()
{
	int i,j,a,b,c=0,d,e,n,k,arr[1000],brr[1000],crr[1000];
    while(1){
    	c=0;
	if(scanf("%d %d",&a,&n)!=2)
	{
		break;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(a%2==0)
	{
		printf("ERROR");
		continue;
	}
	for(j=0;j<(n-a+1);j++)
	{
		d=0;
	for(i=0;i<a;i++)
	{
		brr[i]=arr[i+j];
	}
	for(k=0;k<a-1;k++)
	{
	   for(b=0;b<a-k-1;b++)
	   {
	   	if(brr[b]>brr[b+1])
	   	{
	   		int temp=brr[b];
	   		brr[b]=brr[b+1];
	   		brr[b+1]=temp;
		   }
	   }
	}
	d=(a-1)/2;
	crr[c]=brr[d];
	c+=1;
    }
    for(i=0;i<(n-a+1);i++)
    {
    	j=0;
    	j=(a-1)/2+i;
    	arr[j]=crr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
return 0;
}
