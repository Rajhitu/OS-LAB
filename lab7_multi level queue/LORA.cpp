#include <iostream>
using namespace std;

int *twoSum(int *nums, int target)
{
    int *temp[2];
    cout<< sizeof(nums)<<"\n"; 

    for (int i = 0; i <3; i++)
    {

        for (int j = i + 1; j < 3; j++)
        {

            if (nums[j] + nums[i] == target)
            {
                *temp[0] = i;
                *temp[1] = j;fffdffdff
            }
        }
    }
    return *temp;
}sdffdsdf
int main()
{
    int *a[2];
    int b[] = {2, 3, 4};
    *a = twoSum(b, 6);

    cout << *a[0] << "  " << *a[1];
    return 0;
}
