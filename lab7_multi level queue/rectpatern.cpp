#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int temp = n;
    int a[2 * n ][2 * n ];
    while (k !=n)
    {
        for (int i = 0 + k; i < 2 * n - 1 - k; i++)
        {
            for (int j = 0 + k; j < 2 * n - 1 - k; j++)
            {

                a[i][j] = temp;
            }
        }
        temp--;
        k++;
    }

    for (int i = 0; i < 2*n - 1; i++)
    {
        for (int j = 0; j < 2*n - 1; j++)
        {
            cout << a[i][j] <<" ";
        }
        cout<<"\n";
    }

    return 0;
}
