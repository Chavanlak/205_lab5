#include<stdio.h>
int main()
{
    int n,i,j,k,h;
    scanf("%d",&n);
   int x =n/2;
    if(n%2!=0)
{
    n++;
    x =(n-1)/2;

}
   for(i=1;i<=n/2;i++)
   {
       for(j=1;j<=(n/2)-i;j++)

    {
        printf("-");
    }
    printf("*");
    for(k=1;k<=(i-1)*2-1;k++)
    {
        printf("-");
    }
    if(i!=1)
        printf("*");
        for(h=1;h<=(n/2)-i;h++)
        {
            printf("-");
        }
printf("\n");
   }
for(i=x;i>=1;i--)
{
    for(j=1;j<=(n/2)-i;j++)
    {
         printf("-");
    }
  printf("*");
for(k=1;k<=(i-1)*2-1;k++)
     {
        printf("-");
    }
    if(i!=1)
        printf("*");
        for(h=1;h<=(n/2)-i;h++)
        {
            printf("-");
        }

  printf("\n");
}

}
