#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    vector<char> chars(str.begin(), str.end());

    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << chars[i];
        }
        cout << endl;
    } while (next_permutation(chars.begin(), chars.end()));
    return 0;
}
