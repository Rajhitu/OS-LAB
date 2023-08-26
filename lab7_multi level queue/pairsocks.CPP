#include <iostream>
using namespace std;

int main()
{
  int count = 0,c=0;;
    int a[10] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
    int n = 10;

    for (int i = 0; i < n - 1; i++)

    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
  

    for (int i = 0; i < n; i++)
    {
       

        if (a[i] == a[i + 1])
        {
            c++;

            
        }
        else
        {
            if (c % 2 == 0)
            {  
                count = count + (c / 2);
               
                 
            }
            else
                count = count + ((c / 2) + 1);
               
                  
            }
             c=0 ;
           
        }
    }

    cout << count << " ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}
