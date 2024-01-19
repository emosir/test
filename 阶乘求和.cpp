#include<stdio.h>      
int main()      
{      
    long long int sum = 0;      
    int k;       
    scanf("%d", &k);      
    int n[k], i, j;      
    for(i=0; i<k; i++)      
    {      
        scanf("%d", &n[i]);      
    }      
    for(j=0; j<k; j++)      
    {      
        long long int a = 1;  
        for (i = 1; i <= n[j]; i++)      
        {      
            a = (a * i) % 1000000;   
              
            sum = (sum + a) % 1000000;
		}   
        printf("%lld\n", sum);   
        sum=0;      
    }       
    return 0;      
}
