#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",k);
        }
        k--;
        printf("\n");
    }




}







