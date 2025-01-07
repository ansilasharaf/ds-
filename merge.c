#include<stdio.h>
int main()
{
	int n,m,p,i,j,temp;            
	int a[100], b[100], c[200];
	printf("\nEnter the size of first array:\n");
	scanf("%d",&n);
	printf("\nEnter the array elements:\n");
	for( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the first sorted array:\n ");
		for( i = 0; i < n; i++)
		{

			for( j = i + 1; j < n; j++) 
			{
				if(c[i] > c[j]) 
					{
						temp = c[i];
						c[i] = c[j];
						c[j] = temp;
				}
			}
		}   
	for( i = 0; i < n; i++)   
	{  
		printf("%d",a[i]);
	}
	printf("\nEnter the size of second array:\n ");
	scanf("%d",&m);
	printf("\nEnter the array elements:\n");
	for( i = 0; i < m; i++)   
	{   
		scanf("%d", &b[i]);
	}
	printf("\nEnter the second sorted array:\n ");
		for( i = 0; i < m; i++)
		{

			for( j = i + 1; j < m; j++) 
			{
				if(c[i] > c[j]) 
					{
						temp = c[i];
						c[i] = c[j];
						c[j] = temp;
				}
			}
		}   
	for( i = 0; i < m; i++)   
	{  
		printf("%d",b[i]);
	}
	p = n + m;
	for( i = 0; i < n; i++)
	{
		c[i] = a[i];
	}	
	for( i = 0; i < m; i++) 
	{    
		c[i + n] = b[i];
	}
        
	printf("\nThe merged array:\n");
	for( i = 0; i < p; i++)
		printf("%d ", c[i]);        
    
	printf("\nSorted Array:\n");
		for( i = 0; i < p; i++)
		{

			for( j = i + 1; j < p; j++) 
			{
				if(c[i] > c[j]) 
					{
						temp = c[i];
						c[i] = c[j];
						c[j] = temp;
				}
			}
		}   
	for( i = 0; i < p ; i++)       
		printf(" %d ",c[i]);
return 0;   
}
