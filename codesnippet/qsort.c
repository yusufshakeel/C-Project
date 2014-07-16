#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
   return (*(int*)a - *(int*)b);
}

int main()
{
   int size = 5;
   int a[size] = {5, 4, 1, 3, 2};   
   int n;
   
   printf("Before sort: \n");
   for(n = 0; n < size; n++){
      printf("%d ", a[n]);
   }

   qsort(a, size, sizeof(int), compare);

   printf("\nAfter sort:\n");
   for(n = 0 ; n < size; n++){
      printf("%d ", a[n]);
   }
  
  return 0;
}