#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void Insertion_Sorting(int array[], int count)
{
  int i;
  int j;

  int value;
  i = 1;
  while (i < count)
  {
    value = array[i];
    j = i + 1;
    while (value < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = value;
  }
  i++;
}
