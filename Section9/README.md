# Section 9 Notes: Program Flow


## Selection Statemnets

* if statement
* if-else statement
* Nested if statements
* switch statements
* conditional operator ?:

## Looping Constructrs

* for loop
* range-based for loop
* while loop
* do-while loop
* continue and break
* infinite loops
* nested loops

## If Statement

Examples

```
// example 1
if (num > 10)
  ++num;
  
// example 2
if (health < 100 && player_healed)
  health = 100;
  
// example 3
if (selection == 'A')
  cout << "You selected A";
```

To execute more than 1 statement if condition is true, we use block statement

Block Statement Examples

```
if (num > 10) {
  ++num;
  cout << "that's numberwang!";
}
```

## If-Else Statements

Examples 

```
if (num > 10)
  ++num;
else
  num = 10;
```

If-else with block statement

```
if (num > 10){
  ++num;
  cout << "increment";
} else {
  num = 10;
  cout << "Reset";
}
```

If with else if statements

```
if (score > 90)
  cout << "A";
else if (score > 80)
  cout << "B";
else if (score > 70)
  cout << "C";
else
  cout << "F";
````







