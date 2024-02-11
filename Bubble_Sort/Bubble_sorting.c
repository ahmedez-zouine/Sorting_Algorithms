#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_string(int count, int array[])
{
  int i;
  int j;

  i = 0;
  while (i < count - 1)
  {
    j = 0;
    while (j < count - 1)
    {
      if (array[j] > array[j + 1])
        ft_swap(&array[j], &array[j+1]);
      j++;
    }
    i++;
  }
  
}
void printArray(int count, int array[])
{
  int i;
  i = 0;

  while (i < count)
  {
    printf("%d ", array[i]);
    i++;
  }
}
int main()
{
  int array[]= {3,45,7,-2,0,8};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Array before Sorting ...\n");
  printArray(size, array);
  bubble_string(size, array);
  printf("\nArray After Sorting ...\n");
  printArray(size, array);


}
