#include<iostream>
using namespace std;
class length{
    private :
        int foot;
        int inches;
    public :
    length(){
        foot=0;
        inches=0;
    }
    length(int foot,int inches){
        this->foot=foot;
        this->inches=inches;
    }
    friend ostream& operator<<(ostream& output,length& l);
    friend istream& operator>>(istream& input,length& l);
};
ostream& operator<<(ostream& output,length& l){
    output<<l.foot<<" feets , "<<l.inches<<" inches";
    return output;
}
istream& operator>>(istream& input,length& l){
    int temp;
    input>>l.foot>>l.inches;
    if(l.inches >12){
        temp=l.inches/12;
        l.inches=l.inches-temp*12;
        l.foot=l.foot+ temp;
    }
    return input;
}
int main(){
    length l;
    cout<<"Input length in foot and inches : ";
    cin>>l;
    cout<<"length : "<<l<<endl;
    return 0;
}