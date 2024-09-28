#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 4, maxWeight = 15;
    int profit[5] = {0, 2, 3, 5, 7};
    int weight[5] = {0, 4, 6, 7, 9};

    int table[5][16];

    for (int i = 0; i <= n; i++)
    {
        for (int m = 0; m <= maxWeight; m++) 
        {
            if (i == 0 || m == 0)
            {
                table[i][m] = 0;
            }
            else if (weight[i] <= m)
            {
                table[i][m] = max(profit[i] + table[i - 1][m - weight[i]], table[i - 1][m]); //formula to compute the value in the table array
            }
            else
            {
                table[i][m] = table[i - 1][m]; //formula to compute the value in the table array
            }
        }
    }
    cout <<"Maximumum profit =" <<table[n][maxWeight]; //Maximumum weight got can be less than or equal to the weight given
    return 0;
}

