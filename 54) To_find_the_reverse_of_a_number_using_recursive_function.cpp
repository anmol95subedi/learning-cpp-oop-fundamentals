#include<iostream>
using namespace std;
int reverse(int n, int rev = 0) {
    if (n == 0) {
        return 0;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The reverse of "<<n<<" is "<<reverse(n);
}