#include<stdio.h>
int main()
{
    int n,i,j,k;
   printf("Enter : ");
   scanf("%d",&n);
   int x =n/2;
    if(n%2==0)
{
    n++;
    x =(n-1)/2;

}
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=2*n-1;j++)
       {
           if(j>=n-(i-1)&&j<=n+(i-1))
           {
                 printf("-");
           }
           else
           {
               printf("*");
           }
       }

        printf("\n");
   }



}
