#include <iostream>
using namespace std;
#include <map>;
int main()
{

    string s;

    cin >> s;

    int q;

    cin >> q;

    // precomputation

    map<char, int> mpp;

    for (int i = 0; i < s.size(); i ++){

        mpp[s[i]]++;
    }

    for(auto it: mpp){
        cout << it.first << "-> " << it.second << endl;
    }


    while (q--)
    {
        char c;

        cin >> c;

        // fetching
        cout << mpp[c] << endl;

    }

    return 0;
}