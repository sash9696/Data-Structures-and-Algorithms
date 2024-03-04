#include <iostream>
using namespace std;
#include <map>;

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

    map<int,int> mpp;

    for (int i = 0;  i < n; i++){
        mpp[arr[i]]++;
    }

    while (q--){

        int number ;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;

    }

    return 0;
}