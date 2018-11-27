//------------------------------------------------------------------------------
// example.c
//
// A small example program for the sole purpose of demonstrating
// the coding standard
//
// Group: Group 1, study assistant Weinberger
//
// Authors: Andres Weinberger 0123456
// Michael Kenzel 0654321
//------------------------------------------------------------------------------
//

#include <stdio.h>
#define LOOP_REPETITIONS 2 // not a really good name

int sum = 0; // unnecessary global variable, this is evil!

// forward declarations
int addTwoNumbers(int number1, int number2);

//------------------------------------------------------------------------------
///
/// The main program.
/// Reads two numbers from stdin and prints their sum to stdout.
/// The whole proccess is repeated the number of times given
/// in LOOP_REPETITIONS.
///
/// @param argc not used
/// @param argv not used
///
/// @return always zero
//
int main(int argc, char* argv[])
{
  int number_1 = 0;
  int number_2 = 0;
  int counter = 0;
  // note the placement of the block brackets { } (applies to all blocks)
  // also note the spaces between binary operators (like =) and their operands
  for (counter = 0; counter < LOOP_REPETITIONS; counter++)
  {
    printf("Geben sie zwei ganze Zahlen ein:\n");
    scanf("%d %d", &number_1, &number_2);
    sum = addTwoNumbers(number_1, number_2);
    printf("Die Summe ist: %d\n", sum);
  }
  return 0;
}

//------------------------------------------------------------------------------
///
/// Adds the two given numbers and returns the result.
///
/// @param number_1 the first summand
/// @param number_2 the second summand
///
/// @return the sum of number_1 and number_2
//
int addTwoNumbers(int number_1, int number_2)
{
  return number_1 + number_2;
}