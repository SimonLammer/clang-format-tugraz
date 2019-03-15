//------------------------------------------------------------------------------
// example.c
//
// A small example program for the sole purpose of demonstrating
// the coding standard
//
// Group: group 1, assistant Weinberger
//
// Authors: Weinberger, 0123456
//------------------------------------------------------------------------------
//

#include <stdio.h>

#define LOOP_REPETITIONS 2 // not a really good name

struct _ExampleStructure_
{
  int number_;
  int maximum_;
};

typedef struct _ExampleStructure_ NumberStructure;

int sum = 0; // unnecessary global variable

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
int main(int args, char* argv[])
{
  int number_1 = 0; // always initialise variables
  NumberStructure number_2 = {0, 0};
  
  
  int counter = 0;
  // There are spaces between operators like = and arguments 
  for (counter = 0; counter < LOOP_REPETITIONS; counter++)
  {
    printf("Please enter two integer numbers:\n");
    scanf("%d %d", &number_1, &number_2.number_);
    sum = addTwoNumbers(number_1, number_2.number_);
    printf("The sum is: %d\n", sum);
  }

  // Note that we have more than one functionality in this function!
  // This is really bad.
  
  // a really silly if, but it shows how to break long lines
  // Indent at least at blocklevel plus 2 or more additional spaces
  if ((args > 0) && (args > 1) && (args > 2) && (args > 3) && (args > 4) &&
      (args > 5))
  {
    printf("More than 5 arguments\n");
  }
  else
  {
    printf("Fewer than 6 arguments\n");
  }

  // now we do count the arguments with a switch
  // Indent as below
  switch (args)
  {
    case 1:
      printf("1 argument\n");
      break;
    case 2:
      printf("2 arguments\n");
      break;
    default:
      printf("not sure but at least more than 2 arguments\n");
  }
  
  // how to use address operator, dereferencing
  int* pointer = &counter;
  printf("value: %d, address: %p,\n", *pointer, pointer);
  *pointer = 5;
  printf("value: %d, address: %p,\n", *pointer, pointer);

  // How to cast. Note that one should use the floor function here 
  // but it is ommitted to show the cast in a clear way
  // Put the cast operator right before the value to cast
  double a_double = 7.65;
  int my_floored_var = (int)a_double;
  printf("%f\n", a_double);
  printf("%d\n", my_floored_var);

  return 0;
  // please note that this function is rather long. try to split up long
  // functions into a few shorter functions doing the work
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
