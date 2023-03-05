
#include <stdio.h>
#include <stdlib.h>
//#include <malloc/malloc.h>

int main() {
  int x, y, z;
  int uInput;
  char *arrPointer;
  int arrLength;
  char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("Enter the number of values:");
  scanf("%d", &uInput);

  printf("user input was: %d\n", uInput);

  arrPointer = malloc(uInput);

  printf("Size of new array is: %i\n\n", uInput);



  /*
  Examle of seeting values after a malloc

  *(arrPointer+2) = 7; 
  printf("Value of 3rd position is: %d\n", *(arrPointer+2));

  */ 
  
  // cannot do this with a malloc
  // this only works with an actual array you initilized
  // printf("Size of total array is: %lu", sizeof(*arrPointer));
  // arrLength = sizeof(*arrPointer)/sizeof(*(arrPointer+1));
  // have to add another library depending on the OS you are on.
  // You have to add <malloc/malloc.h> for Mac OS.
  // printf("Value of Malloced array is: %lu\n", malloc_size(arrPointer));



  for (x=0; x<uInput; x++) {
    arrPointer[x] = alphabet[x];
  }

  for (z=0; z<uInput; z++) {
    printf("arrPointer[%d]=%c\n", z, arrPointer[z]);
  }











  return 0;
}
