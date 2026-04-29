#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, t;
    cout << "Enter the size of your array : ";
    cin >> n;
    cout << "Enter your target number: ";
    cin >> t;

    vector<int> a(n);
    cout << "Enter the elements in your array: \n";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "Printing the index of the pair of numbers whose sum is equal to target number:\n\n";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == t){
                cout << "(" << i << "," << j << ") ";
            }
        }
    }

    return 0;
}