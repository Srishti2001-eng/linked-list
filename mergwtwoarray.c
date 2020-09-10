#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the size of an element\n");
    scanf("%d",&n);
    int ar[n];
    printf("enter the no. of elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m;
    printf("enter the size of an element\n");
    scanf("%d",&m);
    int br[m];
    printf("enter the no. of elements\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&br[i]);
    }
    int s[n+m];
     for(i=0;i<n;i++)
     {
         s[i]=ar[i];
     }
     for(i=n;i<n+m;i++)
     {
         s[i]=br[i-n];
     }
     for(i=0;i<n+m;i++)
     {
         printf("%d",&s[i]);
     }

}