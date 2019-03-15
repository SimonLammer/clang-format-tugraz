# clang-format-tugraz

Provides a [.clang-format](.clang-format) configuration that satisfies the [C++ coding standard of TUGraz](https://palme.iicm.tugraz.at/wiki/SEP/CS).

## Usage

With the [.clang-format](.clang-format) file in the current directory, run the following command to format `../assignment/file.cpp`:
```shell
clang-format -style=file ../assignment/file.cpp -i
```

## Created with [clang-format-configurator](https://zed0.co.uk/clang-format-configurator/)

Mostly custom rules with `Mozilla` style as fallback.

# CS inconsistencies:

- Empty lines with spaces: "Exception Basisklasse" example (occurs in almost all examples)
- Random empty line: "Haupt .cpp Datei" example

  ```
  try

  {
    result = style.calculateSum(10, 20);
  } 
  catch(Sep::InvalidArgumentException& caught_exception)
  {
    //handle exception - silent catch is bad!
  }
  ```

# Things not correctly formatted by clang-format

## Indentation of access modifier blocks

```c
//----------------------------------------------------------------------------
// Custom Made Invalid Argument Exception
// class to demonstrate the styleguide
//
class InvalidArgumentException : OwnBaseException
{
  public:
    //--------------------------------------------------------------------------
    // Constructor
    // Constructs the excpeption and outputs the error message.
    //
    InvalidArgumentException(const char* message);
};
```

will be wrongly formatted as

```c
//----------------------------------------------------------------------------
// Custom Made Invalid Argument Exception
// class to demonstrate the styleguide
//
class InvalidArgumentException : OwnBaseException
{
  public:
  //--------------------------------------------------------------------------
  // Constructor
  // Constructs the excpeption and outputs the error message.
  //
  InvalidArgumentException(const char* message);
};
```

**Notice the missing indentation layer of the public methods.**

[There is apparently no way to configure clang-format to do this](https://stackoverflow.com/questions/41022954/how-to-indent-after-access-modifiers-with-clang-format)

# Things not checked by clang-format

## Naming

| | [Naming convention](https://palme.iicm.tugraz.at/wiki/SEP/CS#Namenskonvention) |
|:----------------------------------------|:----------------------------|
| Classes, Enums, Structs, Unions and Namespaces | `AllWordsCapitalizedWithoutUnderscore` |
| Methods and Functions                          | `firstWordLowerCaseRestCapitalizedWithoutUnderscores` |
| Local variables and parameters                 | `all_lower_case_with_underscores` |
| Class member variables                         | `all_lower_case_with_underscores_and_trailing_underscore_` |
| Constants, Enum elements, Includeguards        | `ALL_UPPERCASE_WITH_UNDERSCORES` |

## Parameter consistency

Parameter order should be consistent. (Either one is fine.)

```c
int insert(List* list, Element* element); // First parameter is the list, second parameter the element to insert
int remove(Element* element, List* list); // Seems odd that you now first enter the element to remove, doesn't it?
```

## File header

```c
//-----------------------------------------------------------------------------
// <Filename>.cpp
//
// Group: Group <Group Number>, study assistant <Name of Study assistant>
//
// Authors: <Name> <Matriculum Number>
// <Name> <Matriculum Number>
// <Add one row for every additional group member>
//-----------------------------------------------------------------------------
//
```

## Class and function header

```c
//------------------------------------------------------------------------------
// This is an example header comment. Feel free to copypaste and adapt it!
//
// @param human the human to check
// @param number_to_return_if_not_married the number to return if the human
//        is not married. Should be 0 or 1 for example purposes
//
// @return int age of spouse
//
int getAgeOfSpouse(Human* human, int number_to_return_if_not_married)
{
  ...
}
```

Header comments are only necessary in header files (*.h). Additionally, getter and setter functions can be grouped as shown in [this code example]().

## Group code segments

```c
int MyClass::doSomething()
{
  // Calculate prerequesites
  int some_variable = clacPrerequesite1();
  int some_other_var = calcPrerequesite2();

  // Perform main calculation
  int intermediate_result = numberCrunchPreprocess(some_variable, some_other_var);
  int result = numberCrunchMagicHappensHere(intermediate_result);

  // Finalize and return result
  return prettify(result);
}
```

Group code segments with empty lines.

## Includeguards

```c
#ifndef MY_CLASS_H
#define MY_CLASS_H
class MyClass
{
};
#endif // MY_CLASS_H
```

Types definitions must be surrounded by includeguards.

## Initializer lists

```c
MyClass::MyClass()
{
  counter_ = 0;
}
```

should be

```c
MyClass::MyClass() : counter_(0)
{
}
```

## Multi-assignment

```c
int a = 0, b = 1, c = 2;
```

should be 

```c
int a = 0;
int b = 0;
int c = 0;
```

## Braces around single-line statements

```c
if (1 == 1)
  print("foo");
```

should be

```c
if (1 == 1)
{
  print("foo");
}
```

## Additional

- Try not to include header files from within header files.
- Don't include whole namespaces (i.e. don't `using namespace std;`).
- Use C++ casts instead of C ones.
- Class member variables must not be public.