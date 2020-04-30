# Book problem

## Description

I have 5 different books, which can be lent to three friends.

How many combinations are there on condition that the three friends get different books?

> 3 out of 5

## Algorithm

Using numbers, 1, 2, 3, 4, 5, denote the five books.

Each of three friends choose a number from 1, 2, 3, 4, 5.

- Number of friends A is denoted as bA
- Number of friends B is denoted as bB
- Number of friends C is denoted as bC

The condition is

- bA is not equal to bB
- bB is not equal to bC
- bC is not equal to bA

> Algorithm
>
> - for bA in [1, 5]
>   - for bB in [1, 5]
>     - for bC in [1, 5]
>       - check conditions

## Cpp Building Blocks

- `for` loop, [Check here](https://github.com/WilliamCodeBox/Fun-with-Cpp-100-questions/blob/master/01-chicken/README.md)

* `continue` statement

[Reference](https://en.cppreference.com/w/cpp/language/continue)

Skip the remaining portion of the loop body. `Check code optimization part`.

## Code Implementation

```c++
for (bA = 1; bA <= 5; bA++)
  {
    for (bB = 1; bB <= 5; bB++)
    {
      for (bC = 1; bC <= 5; bC++)
      {
        if ((bA != bB) && (bB != bC) && (bC != bA))
        {
          std::cout << "A: " << bA << " B: " << bB << " C: " << bC << std::endl;
        }
      }
    }
  }
```

### Code Optimization

Moving condition checking forward avoids unnecessary loop

```c++
for (bA = 1; bA <= 5; bA++)
  {
    for (bB = 1; bB <= 5; bB++)
    {
      if (bB != bA)
      {
        for (bC = 1; bC <= 5; bC++)
        {
          if (bC != bB)
          {
            {
              if (bC != bA)
              {
                std::cout << "A: " << bA << " B: " << bB << " C: " << bC << std::endl;
              }
            }
          }
          else
          {
            continue;
          }
        }
      }
      else
      {
        continue;
      }
    }
  }
```
