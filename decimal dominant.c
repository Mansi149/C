#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,m;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int dec=n/10;
	int arr[n];
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	m=arr[0];
	for(i=0;i<n;i++)
		if(arr[i]>m)
			m=arr[i];
			
	int freq[m+1];
	for(i=0;i<m+1;i++)
		freq[i]=0;
		
	for(i=0;i<n;i++)
		freq[arr[i]]+=1;
		
	printf("\nDecimal Dominants values are:- ");
	for(i=0;i<m+1;i++)
		if(freq[i]>dec)
			printf("\n%d ",i);
}
