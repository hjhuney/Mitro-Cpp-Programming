# Section 8 Notes: Statements + Operators

### Initialization vs Assignment

Initialization happens when variable is declared for 1st time. 

``` 
int num1 {10}; // this is initialization
```

Assigning happens when you change a value that already exists.

```
num1 = 100; // this is assignment
```

### Chaining Assignment Operators Together

```
int num1 {10};
int num2 {20);

// chain assignment operators together
num1 = num2 = 1000l;
```

### Arithmetic Operators

addition + <br>
subtraction - <br>
multiplication * <br>
division / <br>
modulo % <br>

### Increment and Decrement Operators

Increment operator ++
Decrement operator --

Prefix notation ++ num
Postfix notation num ++ 

```
int counter {10};

// simple increment makes counter 11
counter = counter + 1;

// increment operator prefix makes counter 12
counter ++;

// increment operator postfix makes counter 13
++ counter;
```

pre-increment
```
int counter {10};
int result {0};

result = ++counter;

// both counter and result are equal to 11
// since counter had pre-increment "++" operator
```

post-increment
```
int counter {10};
int result {0};

result = counter++;

// counter is now equal to 11, but result still equals 10
// since counter had post-increment "++" operator
```


