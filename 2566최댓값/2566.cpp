#include <iostream>
using namespace std;

int main()
{
    int m_row = 1;
    int m_column = 1;
    int max = 0;

    for (int row = 1; row <= 9; row++)
    {
        for (int column = 1; column <= 9; column++)
        {
            int tmp;
            cin >> tmp;

            if (tmp > max)
            {
                max = tmp;
                m_row = row;
                m_column = column;
            }
        }
    }

    cout << max << "\n"
         << m_row << " " << m_column;
}