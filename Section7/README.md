# Section 7 Notes: Arrays + Vectors

### Arrays

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
