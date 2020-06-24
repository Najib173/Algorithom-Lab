#include <stdio.h>

int main()
{
	int arr[100],x,i,n,f=0;

	printf("Enter array size: ");
	scanf("%d",&x);

	printf("Enter sorted array element: ");
	for(i=0; i<x; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter Searched number: ");
	scanf("%d",&n);

	int low = 0, high = x-1, mid;

	while (low <= high)
	{
	    mid = low+(high-low)/2;
	    if (arr[mid] == n)
	    {
	    	printf("Searched number %d is found at position %d\n",n,mid+1);
    		f = 1;
    		break;
	    }

	    if (arr[mid] < n)
	    {
	     	low = mid+1;
	    }

	    else
	    {
	    	high = mid-1;
	    }
	}

	if(f==0)
    {
    	printf("Searched number not found!\n");
    }

	return 0;
}
