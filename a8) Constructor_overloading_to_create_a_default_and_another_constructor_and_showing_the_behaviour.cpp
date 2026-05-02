#include<iostream>
using namespace std;
class wall{
    public:
        int length;
        int breadth;
        wall(){
            length=10;
            breadth=10;
        }
        wall(int L,int B){
            length=L;
            breadth=B;
        }
};
int main()
{
    int l,b;
    cout<<"Enter length and breadth of a wall : ";
    cin>>l;
    cin>>b;
    wall w1;
    wall w2=wall(l,b);
    cout<<"The length and breadth of the wall \nwhose values werent initialized during      declaration due to default constructor is :\n     \nLength : "<<w1.length<<"\nBreadth : "<<w1.breadth;
    cout<<"The length and breadth of the wall \nwhose values wer initialized during      declaration by the user is :\n     \nLength : "<<w2.length<<"\nBreadth : "<<w2.breadth;
}