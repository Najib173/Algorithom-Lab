#include<stdio.h>

void merge_sort(int i, int j, int arr1[], int arr2[])
{
    if (j <= i)
    {
        return;
    }

    int mid = (i+j)/2;

    merge_sort(i, mid, arr1, arr2);
    merge_sort(mid + 1, j, arr1, arr2);

    int left = i;
    int right = mid + 1;
    int k;

    for (k=i; k<=j; k++)
    {
        if (left == mid + 1)
        {
            arr2[k] = arr1[right];
            right++;
        }
        else if (right == j + 1)
        {
            arr2[k] = arr1[left];
            left++;
        }
        else if (arr1[left] < arr1[right])
        {
            arr2[k] = arr1[left];
            left++;
        }
        else
        {
            arr2[k] = arr1[right];
            right++;
        }
    }

    for (k = i; k <= j; k++)
    {
        arr1[k] = arr2[k];
    }
}

int main() {
  int arr1[100], arr2[100], n, i;
  printf("Enter array size: ");
  scanf("%d", &n);

  printf("Enter array elements: ");

  for (i=0; i<n; i++)
  {
      scanf("%d", &arr1[i]);
  }

  merge_sort(0, n-1, arr1, arr2);

  printf("Sorted array: ");
  for (i=0; i<n; i++)
  {
      printf("%d ", arr1[i]);
  }
  return 0;
}
