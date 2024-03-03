#include <iostream>
using namespace std;

int main()
{

    string s;

    cin >> s;

    int q;

    cin >> q;

    // precomputation

    // for lowercase chars or ny givens et of chars

    // int hash[26] = {0};

    // if that is not mentioned then
    //i.e if exclusivity of chars is not mentioned

    int hash[256] = { 0 };

    for (int i = 0; i < s.size(); i++)
    {

        // hash[s[i] - 'a'] += 1;
        hash[s[i]] += 1;
    };

    while (q--)
    {
        char c;

        cin >> c;

        // fetching
        // cout << hash[c - 'a'] << endl;

        cout << hash[c] << endl;
    }

    return 0;
}