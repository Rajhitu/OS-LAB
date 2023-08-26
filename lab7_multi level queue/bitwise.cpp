#include <iostream>
using namespace std;

int main()
{
    int n, k, c = 0;
    int maxad = 0, maxor = 0, maxxor = 0;

    cin >> n >> k;
    int add[100], orr[100], xorr[100];

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j > i)
            {
                add[c] = i & j;
                orr[c] = i | j;
                xorr[c] = i ^ j;
                // cout << i << " " << j <<" "<< add[c] << " " << orr[c] << " " << xorr[c] << " \n";
                c++;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (add[i] < k && add[i] > maxad)
        {
            maxad = add[i];
        }
        if (orr[i] < k && orr[i] > maxor)
        {
            maxor = orr[i];
        }
        if (xorr[i] < k && xorr[i] > maxxor)
        {
            maxxor = xorr[i];
        }
    }

    cout << maxad << "\n";
    cout << maxor << "\n";
    cout << maxxor << "\n";

    return 0;
}
