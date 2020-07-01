#include<stdio.h>
int main(){
   int i, j, n, arr[100];
   printf("Enter array size: ");
   scanf("%d",&n);

   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }

   int temp;
   for(i=1; i<n; i++)
   {
      temp = arr[i];
      j = i-1;

      while((temp<arr[j]) && (j>=0))
      {
         arr[j+1] = arr[j];
         j = j-1;
      }
      arr[j+1] = temp;
   }

   printf("Sorted array: ");
   for(i=0; i<n; i++)
   {
      printf(" %d",arr[i]);
   }

   return 0;
}
