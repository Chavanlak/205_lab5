#include<stdio.h>
int main()
{
    int n,i,j,k;
   printf("Enter : ");
   scanf("%d",&n);
    //if(n%2==0)

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=2*n-1;j++)
       {
           if(j>=n-(i-1)&&j<=n+(i-1))
           {
                 printf("*");
           }
       }

        printf("\n");

   }


}
