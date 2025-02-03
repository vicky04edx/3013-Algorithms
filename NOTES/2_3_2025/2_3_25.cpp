# include <iostream>
using namespace std;

bool in_array(int *a,int index)
{
    for ()
}

int main()
{
    int size = 100;
    int *nums = new int[size];
    bool unique;
    int r;

    for (int i=0; i<size; i++)
    {
       
        unique = true;
        while(unique)
        {
            int r = rand()%10000

            for (int j=0; j<=i; j++)
            {
                if(nums[j] == r)
                {
                    unique = false;
                    break;
                }
            }
        }

        nums[i] = r;
    }

}