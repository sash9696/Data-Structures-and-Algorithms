#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    int n;

    cin >> n;


    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int q ;
    cin  >> q;

    //pre compute

    unordered_map<int,int> mpp;

    //Time complexity for both
    //storing and fetching is log(N) for all case
    //worst best avg case

    for (int i = 0;  i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){

        cout << it.first << "-> " << it.second << endl;
    }

    while (q--){

        int number ;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;

    }

    return 0;
}