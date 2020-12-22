#include <stdio.h>
#define MAX 5

int search(int *arr, int num) {
  for (int i = 0; i < MAX; i++) {
    if (*(arr + i) == num)
      return i;
  }
  // printf("The element %d not found\n", num);
  return -1;
}

void main() {
  int arr1[MAX], num, flag;

  printf("Enter %d numbers in 1st array: ", MAX);
  for (int i = 0; i < MAX; i++)
    scanf("%d",arr1 + i);

  printf("\nArray 1:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(arr1 + i));

  printf("Enter number to be searched: ");
  scanf("%d",&num );

  flag = search(arr1, num);
  if (flag >= 0)
    printf("The number %d is at position %d\n",num, flag );
  else
    printf("%d not found\n",num );
}
