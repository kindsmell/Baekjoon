#include <iostream>
#include <string>
using namespace std;

string vowels = "aeiou";
string consonant = "bcdfghjklmnpqrstvwxyz";

int havevowel(string input);
int nothree(string input);
int notwo(string input);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int flag = 0;
        string input;
        cin >> input;
        if (input == "end")
            break;

        if (havevowel(input) && nothree(input) && notwo(input))
            cout << "<" << input << ">"
                 << " is acceptable.\n";
        else
            cout << "<" << input << ">"
                 << " is not acceptable.\n";
    }
}

int havevowel(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j < vowels.length(); j++)
        {
            if (input[i] == vowels[j])
                return 1;
        }
    }
    return 0;
}

int nothree(string input)
{

    int count = 0;
    for (int i = 0; i < input.length(); i++)
    {
        int flag = 0;
        for (int j = 0; j < vowels.length(); j++)
        {
            if (input[i] == vowels[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            count++;
        else
            count = 0;

        if (count >= 3)
            return 0;
    }

    count = 0;
    for (int i = 0; i < input.length(); i++)
    {
        int flag = 0;
        for (int j = 0; j < consonant.length(); j++)
        {
            if (input[i] == consonant[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            count++;
        else
            count = 0;

        if (count >= 3)
            return 0;
    }

    return 1;
}

int notwo(string input)
{
    for (int i = 0; i < input.length() - 1; i++)
    {
        if (input[i] == input[i + 1] && input[i] != 'e' && input[i] != 'o')
            return 0;
    }
    return 1;
}