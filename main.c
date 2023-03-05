
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main() {
  int x;
  int uInput;
  char *arrPointer;
  int arrLength;

  printf("Enter the number of values:");
  scanf("%d", &uInput);

  printf("user input was: %d\n", uInput);

  arrPointer = malloc(uInput);

  printf("Size of new array is: %i\n", uInput);
  
  *(arrPointer+2) = 7;
  
 
  printf("Value of 3rd position is: %d\n", *(arrPointer+2));
 
  // cannot do this with a malloc
  // this only works with an actual array you initilized
  // printf("Size of total array is: %lu", sizeof(*arrPointer));
  // arrLength = sizeof(*arrPointer)/sizeof(*(arrPointer+1));
  // have to add another library depending on the OS you are on.

  printf("Value of Malloced array is: %lu\n", malloc_size(arrPointer));

  return 0;
}
