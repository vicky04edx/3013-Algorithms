# NOTES: 2/5/2025

## Exam 1 Review:

### Recursion:

- Functions that calls itself, has a base case, reduces search space. 
- Works with trees
### Iterative solution and recursive solution

- Iterative means a lot of loops 
- Recursion is not efficient
- A lot of recursive solutions can be written as an itertive solution.
- We use iterative solution UNLESS recursion is abosulutely neccesary.

#### Example: Reverse the integer 30146

```cpp
void reverse(int x)
{
    if(x==0)
        return;

    cout << x % 10; 
    reverse(x/10);
}
```

#### Example: Add integers 30146

```cpp
int sum(int x)
{
    if(x==0)
        return 0;

    return (x % 10) + sum(x/10);
    
}
```

#### Fibonacci sequence example:

```cpp
int fib(int x)
{
    if(x<=1)
        return 1;

    return fib(n -1) + fib(n-2);
}
```

### Check a palindrome: COMPLETE LATER

```cpp
bool isPalindrome(string word, int i, int j)
{
    if(i==j || i>j)
        return true;
    else 
        isPalindrome(word,++i,--j);
    
}
```

#### Traverse an array/linked list:

```cpp
void printLL(Node *p)
{
    if(p==NULL)
        return;

    cout << p->data;
    printLL(p->next);
}

void printA(int *A, int i, int size)
{
    if(i==size)
        return;

    cout << A[i];
    printA(A,++i, size)
}
```

#### Traverse tree:

```cpp
void printT(Node *tree)
{
    if(!root)
        return;

    cout <<root->data;//pre

    printT(root->left); //in
    cout << root->data;

    printT(root->right);//post
    cout << root->data;
}





