# Section 5 Notes: C++ Program Structure

### Comments

```
// single-line comments
```

```
/* multi
line
comments */
```

### The main() Function

```
int main()
{
// code

return 0;
}
```

``` 
int main(int argc, char ^argv[])
{
// code

return 0;
}
```

### Namespaces

* "std" is the "standard" namespace
* "Cin" and "Cout" are objects in the standard namespace

Explicitly using namespace

```
#include <iostream>

int main()
{
  std:cout << "hello";
  return 0;
}
```

Using namespace directive

```
#include <iostream>
using namespace std;

int main()
{
  cout << "hellO";
  return 0;
}
```

Qualified using namespace variant

```
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  cout << "hellO" << endl;
  cout << "world" << endl;
  return 0;
}
```
  

### Basic I/O Using 'cin' and 'cout'

* cout: standard output stream (console)
* cin: standard input stream (keyboard)
* "<<": insertion operator; output streams
* ">>": extraction operator; input streams
* insertion operator does not automatically add line breaks; must use 'endl' or "\n"
