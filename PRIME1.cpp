#include<stdio.h>

#define max 32000

int prime[max];
int p[max];
int main()
{


    for(int i=2;i<max;i++)prime[i]=1;
    for(int i=2;i<max;i++){
        if(prime[i])
        for(int j=i;j*i<max;j++)
        prime[i*j]=0;
    }
    int j=0;
    for(int i=2;i<max;i++)
    {
        if(prime[i])
        {
            p[j++]=i;
        }
    }
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            for(int k=0;p[k]*p[k]<=i;k++)
            {
                if(i%p[k]==0)
                goto out;
            }
            if(i!=1)
            printf("%d\n",i);
            out:;
        }
        printf("\n");
    }
    return 0;
}