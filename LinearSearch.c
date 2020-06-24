#include <stdio.h>
int main(void)
{
    int arr[100],x,i,n,f=0;
    printf("Enter array size: ");
    scanf("%d",&x);

    printf("Enter array element: ");
    for(i=0; i<x; i++)
    {
    	scanf("%d",&arr[i]);
    }

    printf("Enter Searched number: ");
    scanf("%d",&n);

    for(i=0; i<x; i++)
    {
    	if(arr[i]==n)
    	{
    		printf("Searched number %d is found!",n);
    		f = 1;
    		break;
    	}
    }
    if(f==0)
    {
    	printf("Searched number %d not found!",n);
    }

    return 0;
}
