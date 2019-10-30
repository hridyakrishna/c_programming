#include<stdio.h>

void SelSort(int a[], int n)
{
	int temp=0,m=0 ;
	for(int i=0; i<n-1 ; i++ )
	{
		m=i ;
		for(int j=i+1 ; j<n ; j++ )
		{
			if(a[j]<a[m])
				m=j;
		}
		temp=a[i];
		a[i]=a[m];
		a[m]=temp;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0 ; i<n ; i++)
		scanf("%d",&a[i]) ;
	SelSort(a,n) ;
	for (int i=0 ; i<n ; i++)
		printf("%d ",a[i]) ;
	return 0 ;
}
				
			
