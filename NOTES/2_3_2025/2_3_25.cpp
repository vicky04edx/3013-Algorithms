# include <iostream>
using namespace std;

bool in_array(int *a,int x, int index)
{
    for (int i=0; i<=index; i++)
    {
        if(a[i]==x)
        {
            return true;
        }
      
    }
      return false;
}

bool print()
{
    for (int j=0; j<=size; j++)
    {
        cout << a[size] << " ";
        if (i+1%15)
    }
}

int binary_search(int *a, int key, int size)
{
    int f = 0;
    int r = size - 1;
    int m (f + r)/2;
    bool found = false;
    while(!found)
    {
        if(f==r==m)
        {
            return -1;
        }
        if (a[f] == key)
        {
            return f;
        }
         if (a[m] == key)
        {
            return r;
        }
         if (a[r] == key)
        {
            return r;
        }
         if (key >a[m])
        {
            f= m+1;

        }
        else
        {
            r = m + 1; 
        }
        m = (f+r)/2
    }
}
void swap (int *a, int i, int j)
{

    int temp = a[i];
}
int main()
{
    int size = 100;
    int *nums = new int[size];
    bool unique;
    int r;

    for (int i=0; i<size; i++)
    {
       
        r = rand()%10000;
        while(in_array(nums, r, i))
        {

            r = rand()%10000;
        }

        nums[i] = r;
    }
    print(nums, size);
    cout << endl;
    bubble_sort(nums,size);
    print(nums, size);
}