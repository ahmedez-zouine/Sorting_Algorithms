#include <stdio.h>

void ft_swap(int *i, int *j)
{
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

void selection_sort (int array[] , int count)
{
  int i;
  int j;
  int min_index;
  i = 0;
  while(i < count - 1)
  {
    min_index = i;
    j = i + 1;
    while (j < count)
    {
      if (array[min_index] > array[j])
      {
        min_index = j;
      }
      j++;
    }
    if (min_index != i)
      ft_swap(&array[min_index], &array[i]);
    i++;
  }
}

void printArray(int count, int array[])
{
  int i = 0;
  while (i < count)
  {
    printf("%d ",array[i]);
    i++;
  }
}
int main(void)
{
  int array[] = {89,7,9,1,-1};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Array before sorting ...\n");
  printArray(size, array);
  selection_sort(array,size);
  printf("\nArray after sorting ...\n");
  printArray(size, array);

}
