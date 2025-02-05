# NOTES: 2/5/2025

## Exam 1 Review:

#### Recursion:

- Functions that calls itself, has a base case, reduces search space. 

#### Iterative solution and recursive solution

- Iterative means a lot of loops 
- Recursion is not efficient
- A lot of recursive solutions can be written as an itertive solution.
- We use iterative solution UNLESS recursion is abosulutely neccesary.

##### Example: Reverse the integer 30146

```cpp
void reverse(int x)
{
    if(x==0)
        return;

    cout << x % 10; 
    reverse(x/10);
}
```

##### Example: Add integers 30146

```cpp
int sum(int x)
{
    if(x==0)
        return 0;

    return (x % 10) + sum(x/10);
    
}
```

##### Fibonacci sequence example:

```cpp
int fib(int x)
{
    if(x<=1)
        return 1;

    return fib(n -1) + fib(n-2);
}
```





