#include <iostream>
using namespace std;

int main()
{
    int i, j, n, k, a;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {

            for (k = 1; k <= 7; k++)
            {
                if (i == k || j == k || i == 8 - k || j == 8 - k)
                {
                    cout << k + 1;
                }
            }
        }
        cout << "\n";
    }
}
