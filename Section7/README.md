# Section 7 Notes: Arrays + Vectors

### Arrays

* Rarely used in modern C++; vectors more commonly used now
* All elements must be of the same type
* Each element can be accessed directly
* First element is at index 0
* Last element at index size - 1
* Fixed size

### Declaring Arrays

Example

```
// int array of 5 test scores
int test_scores[5];

// int array of 10 scores
int high_score_per_level [10];

// double array of days in year
const double days_in_year {365};

// double array
double hi_temperatures [days_in_year];
```

Better practice is typically to initialize arrays


### Initailizing Arrays

Example

```
// int array of 5 test scores
int test_scores[5]{100, 95, 99, 87, 88};

// int array of 10 scores
int high_score_per_level [10] {3,5}; // init to 3,5 and remaining to 0

// double array of days in year
const double days_in_year {365} {0}; // init all to 0

// int array with size automatically calculated
int another_array {1,2,3,4,5}; // size automatically calculated
```

### Accessing Array Elements

```
// initialize array
int test_scores [5] {100, 95, 99, 86, 88};

// access 2nd element of "95"
test_scores[1];

```

### Name of Array is Memory Location

One thing very different from Python is that the name of the array is the memory address for where array is located. Whereas in Python, calling the array name would simply give you the array, in C++, you'll get that memory address instead. You need to slice in order to get the elements of the array. 


### Multi-Dimensional Arrays

Example

```
// declare 3x4 array
int movie_rating[3][4];
```


### Vectors

* C++ vector is a dynamic array
* Similar semantics and syntax as arrays
* Very efficient
* Can grow and shrink in size at execution time
* Elements are all the same size
* Elements initialized to zero; won't contain "garbage"

### Declaring + Initializing Vectors

Declaring vectors example

```
// must include vector library
#include <vector>

using namespace std;

vector <char> vowels (5);

vector <int> test_scores (10);
```

Initializing vectors example

```
vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

vector <int> test_scores {100, 98, 89, 85, 93);

# initializing vector to have 365 values, all with the value of 80.0
vector <double> hi_temps (365, 80.0);
```

### Accessing Vector Elements

Two methods. First is same as arrays:

```
test_scores[0]
```

Second using the "at" method / vector syntax

```
test_scores.at(0)
```

### Push Back Method / Add More Elements

```
// add "90" to end of vector
vector_name.push_back(90)
```

### Out of Bounds

Arrays never do bounds checking, but many vector methods do. 


