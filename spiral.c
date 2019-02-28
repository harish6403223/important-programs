#include<stdio.h>
int main()
{
	int b=3,v=3;
	int a[b][v],i,j,k=b-1,l=v-1,h;
	for(i=0;i<b;i++)
	{
		for(j=0;j<v;j++)
		scanf("%d",&a[i][j]);
	}
	i=0;j=0;
	while(1)
	{
       for(h=j;h<l;h++)
        printf("%d ",a[i][h]);

	   for(h=i;h<k;h++)
        printf("%d ",a[h][l]);

	   for(h=l;h>j;h--)
        printf("%d ",a[k][h]);

	   for(h=k;h>i;h--)
        printf("%d ",a[h][j]);

	   i++;j++;k--;l--;
	   if(i>k||j>l)
	   {
	        if(b==v&&b%2==1)
	        printf("%d ",a[b/2][b/2]);
	        break;
       }
    }
}
