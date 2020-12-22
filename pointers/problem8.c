#include <stdio.h>
#define MAX 5

// function to swap individual values
void vswapi(int *p,int *q)
{
    int ll;
    ll = *p;
    *p = *q;
    *q = ll;
}

// Function to swap whole arrays
void array_swap(int *arr1, int *arr2) {
  for (int i = 0; i < MAX; i++) {
    vswapi(arr1 + i, arr2 + i);
  }
}

void main() {
  int arr1[MAX], arr2[MAX];

  printf("Enter %d numbers in 1st array: ", MAX);
  for (int i = 0; i < MAX; i++)
    scanf("%d",arr1 + i);

  printf("Enter %d numbers in 2nd array: ", MAX);
  for (int i = 0; i < MAX; i++)
    scanf("%d",arr2 + i);

  printf("\nArray 1:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(arr1 + i));

  printf("\nArray 2:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(arr2 + i));

  array_swap(arr1, arr2);

  printf("\nSwapping\n");
  printf("\nArray 1:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(arr1 + i));

  printf("\nArray 2:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(arr2 + i));
}
