#include<stdio.h>
    int main()
{
    int x,i=1,j,a[3]={2,3,5};
    int y,z=1;
    scanf("%d",&x);
    int ugly[x];
    ugly[0]=1;
    for(i=2;z<x;i++)
    {
        y=i;
        for(j=0;j<3;)
        {
            if(z%a[j]==0)
            {
                y/=a[j];
            }
            else
                j++;
        }
        if(y==1)
        {
          ugly[z]=i;
          z++;
        }
    }
    printf("%d",ugly[x-1]);
}
