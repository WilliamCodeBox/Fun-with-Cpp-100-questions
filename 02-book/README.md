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
