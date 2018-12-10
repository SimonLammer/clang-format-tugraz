# clang-format-tugraz

## Created with [clang-format-configurator](https://zed0.co.uk/clang-format-configurator/)

Mostly custom rules with `Mozilla` style as fallback.

# CS inconsistencies:

https://palme.iicm.tugraz.at/wiki/ESP/CS#Jeder_Befehl_steht_in_einer_eigenen_Zeile

- If without braces
- Space after if

https://palme.iicm.tugraz.at/wiki/ESP/CS#Kurzes_Code_Beispiel_.28Cheat_Sheet.29_-_Teil_2_.28with_Pointers_etc.29

- trailing space in `// There are spaces between operators like = and arguments `
- trailing space in `// How to cast. Note that one should use the floor function here `
- missing space in `024}; `
- trailing space in `024}; `
- Indent empty lines? `050   ` vs `060 `
- 2nd empty line on line 50?
- Switch without `break` in `default`?

Spaces in braces?
Teil3.pdf: `int month_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };` 
Example2:  `048   NumberStructure number_2 = {0, 0};`

2_do_while_demo.c do while without braces:
```c
do
  sum += counter;
while (--counter);
```

# Things not checked by clang-format

## Naming

| | [Naming convention](https://palme.iicm.tugraz.at/wiki/ESP/CS#Namenskonvention) |
|:----------------------------------------|:----------------------------|
| typedef‘ed Enums, Structs und Unions    | `AllWordsCapitalizedWithoutUnderscore` |
| Funktionen                              | `firstWordLowerCaseRestCapitalizedWithoutUnderscores` |
| Lokale Variablen, Funktionsparameter    | `all_lower_case_with_underscores` |
| Struct-Elemente                         | `all_lower_case_with_underscores_and_trailing_underscore_` |
| Konstanten, Enum-Elemente               | `ALL_UPPERCASE_WITH_UNDERSCORES` |
| Nicht typedef’ed Enums, Structs, Unions | `_AllWordsCapitalizedWithUnderscoresOnBothEnds_` |

## File header

```c
//-----------------------------------------------------------------------------
// <Filename>.c
//
// <Explanation of the program ...>
// <... May have multiple lines.>
//
// Group: Group <Group Number>, study assistant <Name of Study assistant>
//
// Authors: <Name> <Matriculum Number>
// <Name> <Matriculum Number>
// <Add one row for every additional group member>
//-----------------------------------------------------------------------------
//
```

## Function header

```c
//-----------------------------------------------------------------------------
///
/// This is an example header comment. Copypaste and adapt it!
///
/// @param human The human to check.
/// @param number_to_return_if_not_married The number to return if the human
///        is not married. Should be 0 or 1 for example purposes.
///
/// @return int age of spouse
//
int getAgeOfSpouse(Human* human, int number_to_return_if_not_married)
{
  ...
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
