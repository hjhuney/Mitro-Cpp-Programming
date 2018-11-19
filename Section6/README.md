# Section 6 Notes: Variables + Constants

### Declaring and initializing variables

3 different ways to initialize

```
// C-like initialization
int age = 21; 
```

```
// Constructor initialization
int age (21); 
```

```
// C++ 11 list initialization syntax
int age {21}; 
```

### Global vs Local Variables

```
int main()
{
  // local variable
  int age{21}; 
  cout << age << endl;
  return 0;
 }
 ```
 
 ```
// global variable
int age{21};

int main()
{
  cout << age << endl;
  return 0;
 }
 ```
 
### Primitive Data Types

Character types
* char: Exactly one byte; at least 8 bits; works for most languages
* char16_t: At least 16 bits
* char32_t: At least 32 bits
* wchar_t
* The larger character type may be used for languages with thousands of characters

Integer types
* can declare "signed" or "unsigned"; "signed" by default; must use "unsigned" keyword to declare unsigned
* short: at least 16 bits
* int: at least 16 bits
* long: at least 32 bits
* long long: at least 64 bits
* unsigned: an unsigned int

Floating-point types
* float: 7 decimal digit precision
* double: 15 decimal digits
* long double: 19 decimal digits

Boolean
* zero is false
* non-zero is true
* "true" and "false" keywords

### Sizeof Operator

Determines size in bytes of a type or variable

```
sizeof(int)
sizeof(double)
sizeof(some_variable)
```

sizeof operator gets its info from 2 C++ include files, **climits** and **cfloat**. 


### Constants

Similar to varaibles, but their values can't be changed once declared (sort of like "values" in Scala). Useful when we don't want to be able to change a value (e.g. months in a year is always "12")

Integer Literal Constants
* 12 --- an integer
* 12U --- an unsigned integer
* 12L --- a long integer
* 12LL --- a long long integer

Floating point literal constants
* 12.1 --- a double
* 12.1F --- a float
* 12.1L --- a long double

Character literal constants
* \n --- newline
* \r --- return

