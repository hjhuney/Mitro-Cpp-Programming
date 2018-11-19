# Section 6 Notes: Variables + Constructs

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
