
#include <stdio.h>
#include <stdlib.h>
//#include <malloc/malloc.h>

int main() {
  int x, y, z;
  char userInput[2];
  int uInput = 0;
  char *arrPointer;
  char *userChars;
  int arrLength;
  char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  struct user {
    int input;
    char *letterArr;
    char *name;
  };

  
  while(uInput > 26 || uInput < 1) {
    printf("Enter the # of values for your array, from 1 to 26:");
    fgets(userInput, 5, stdin);

// this doesnt work with fgets down below 
//  scanf("%d", &uInput);


    uInput = atoi(userInput);
  }; 
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
    printf("arrPointer[%d]=%c | memAddr=%p\n", z, arrPointer[z], &arrPointer[z]);
  }



// Get the users name.

  userChars = malloc(20);
  printf("Enter your name:");
  //scanf("%s", userChars);
  //This is another way, that accepts white space
  fgets(userChars, 20, stdin);
  printf("\nYour name is: %s\n", userChars);
    
  struct user A;

  A.input = uInput;
  A.letterArr = arrPointer;
  A.name = userChars;


  printf("The users name is: %s\n", A.name);
  printf("The user chose: %d\n", A.input);
  printf("The users chosen arr: \n");
  for(x=0; x<A.input; x++) {
    printf("arr[%d]: %c | memAddr: %p\n", x, A.letterArr[x], &A.letterArr[x]);
  };
  

  printf("\nAddress of arrPointer = %p\n", &arrPointer);
  printf("Address of User arr copied from arrPointer = %p\n\n", &A.letterArr);

  free(arrPointer);
  free(userChars);

  return 0;
}
