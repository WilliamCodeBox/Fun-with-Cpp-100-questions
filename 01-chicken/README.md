# Chicken problem

## Description

The prices for different kinds of chicken:

- 5 for one cock
- 3 for one hen
- 1 for three chicken

Given 100 and the condition that the total number is 100, how many cocks, hens, and chicken can you buy?

## Procedure

Denote the number of cocks is `nCock`, the number of hens is `nHen`, and the number of chicken is `nChick`.

The mathematical model for this question is

<p align="center"><img src="/01-chicken/tex/e33176b07825ea2ba38652315bddae94.svg?invert_in_darkmode&sanitize=true" align=middle width=331.122264pt height=49.315569599999996pt/></p>

We have **three** variables and **two** equations, thus this is a **Indeterminate system of equations**, and there are more than one solution to this problem.

> There is a implicitly condition that the number of chicken must be integer multiples of 3.

We can use **Exhaustive method** to solve the indeterminate system of equations, i.e., loop through all kinds of possible combinations, and check whether the conditions are satisfied.

There are two things we need to determine

- The upper limit of number for each kind of chicken.
  - `int(100 / 5)` for Cock
  - `int(100 / 3)` for Hen
  - `int(100 / 1) * 3` for Chicken, but the total number condition is 100, thus the upper limit for chicken is 100
- The conditions we have to achieve
  - total money is 100
  - total number is 100
  - number of chicken is integer multiples of 3

## Cpp Building blocks

`for` loop

example:

```c++
for (int i = 0; i < 100; i++) {
  // do something with or without i
}
```

## Code implementation

check `main.cpp`. The main part of the code is a nested `for` loop

```c++
for (nCock = 0; nCock <= maxCock; nCock++)
  {
    for (nHen = 0; nHen <= maxHen; nHen++)
    {
      for (nChick = 0; nChick <= maxChick; nChick++)
      {
        // check condition
        if (nChick % 3 == 0) // condition 3
        {
          // helper variables
          if ((totalNumber == 100) && (totalMoney == 100)) // condition 1 and 2
          {
            // print the solution
          }
        }
      }
    }
  }
```

### Code Optimazation

Any algorithm has a specific **time** complexity and a specific **spatial** complexity.

We way our algorithm has a complexity as smaller as possible.

- less loop
- less condition check

**Optimazation one**

```c++
for (nCock = 0; nCock <= maxCock; nCock++)
  {
    for (nHen = 0; nHen <= maxHen; nHen++)
    {
      nChick = 100 - nCock - nHen; // condition 2
      // check condition
      if (nChick % 3 == 0) // condition 3
      {
        // helper variable
        if (totalMoney == 100) // condition 1
        {
          // print solution
        }
      }
    }
  }
```
