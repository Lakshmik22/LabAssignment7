#include <stdio.h>

void bubbleSort(int arr[], int n)
{
   int i, j, temp,swap=0;
   for (i = 0; i < n; i++)
   {
       swap=0;
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swap++;
           }
       }
      printf("\nNumber of swaps for index %d#: %d",i,swap); 
   }
}
int main()
{
   int arr[] = {97,16,45,63,13,22,7,58,72};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   //Print the sorted array
   printf("\nSorted Array: ");
    int i;
   for(i= 0; i<n; i++){
   		printf("%d ", arr[i]);
   }
   return 0;
}
