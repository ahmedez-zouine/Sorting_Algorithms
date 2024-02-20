#include <stdio.h>
#include <unistd.h>
void marge(int arrayLeft[], int arrayRight[], int array[])
{
  int i;
  int j;

  int sizeLeft, sizeRight, left, right;
  sizeLeft = (sizeof(array) / 4);
  sizeRight = sizeof(array) / sizeof(array[0]);

  i = 0;
  j = 0;
  left = 0;
  right = 0;
  while (left < sizeLeft && right < sizeRight)
  {
    if (arrayLeft[i] < arrayRight[i])
      array[i] = arrayLeft[i];
    else
      array[i] = arrayRight[i];
    i++;
  }
  while (arrayLeft[i])
  {
    array[i] = arrayLeft[i];
    i++;
  }
  while (arrayRight[i])
  {
    array[i] = arrayLeft[i];
    i++;
  }
}

void margeSorting(int array[])
{
    int i;
    int j, sizeLeft;
    int size = (sizeof(array) / sizeof(array[0]));

    if (size > 1)
    {
      i = 0;
      j = 0;
      sizeLeft = size / 2;
      char ArrayLeft[sizeLeft];
      char ArrayRight[size - sizeLeft];
      while (i < size)
      {
        if (size > sizeLeft)
        {
          ArrayLeft[i] = array[i]; 
        }
        else {
          ArrayRight[j] = array[i];
          j++;
        }
        i++;
      }
      margeSorting(ArrayLeft);
      margeSorting(ArrayRight);
      marge(ArrayLeft, ArrayRight, array);
    }
}

int main()
{
  int arrayElement[] = {23, 4, 45, 0, 323, -1, 0};

  margeSorting(arrayElement);

  int size = (sizeof(arrayElement) / sizeof(arrayElement));

  int i = 0;
  while (i < size)
  {
    printf("%d ", arrayElement[i]);
  }
}

