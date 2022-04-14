#include <stdio.h>

int main() {
  int counter = 0, number = 0, largest = 0;

  while ( counter < 10 ) {
    printf( "Enter a number: \n" );
    scanf( "%d", &number );

    if ( number >= largest ) {
      largest = number;
    }
    counter++;
  }

  printf( "The largest number is %d\n", largest );

  return 0;
}
