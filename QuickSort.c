#include<stdio.h>

void quicksort(int arr[25],int first,int last){
   int i, j, pvt, temp;

   if(first<last)
   {
      pvt=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(arr[i]<=arr[pvt]&&i<last)
         {
         	i++;
         }
         while(arr[j]>arr[pvt])
         {
         	j--;
         }
         if(i<j)
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pvt];
      arr[pvt]=arr[j];
      arr[j]=temp;

      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
   }
}

int main(){
   int arr[100], size, i;

   printf("Enter array size: ");
   scanf("%d",&size);

   printf("Enter array elements: ");
   for(i=0;i<size;i++)
   {
   		scanf("%d",&arr[i]);
   }

   quicksort(arr,0,size-1);

   printf("Sorted array elements: ");
   for(i=0;i<size;i++)
   {
      printf("%d ",arr[i]);
   }

   return 0;
}
