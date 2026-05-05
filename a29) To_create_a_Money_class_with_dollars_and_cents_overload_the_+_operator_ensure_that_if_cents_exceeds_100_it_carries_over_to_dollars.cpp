#include<iostream>
using namespace std;
class money{
    private :
        int dollar;
        int cents;
    public :
    money(){
        dollar=0;
        cents=0;
    }
    money(int dollar,int cents){
        this->dollar=dollar;
        this->cents=cents;
    }
    float showmoney(){
        return dollar+0.01*cents;
    }
    money operator +(money& m){
        money n;
        int x;
        n.dollar=dollar+m.dollar;
        
        n.cents=cents+m.cents;
        if(n.cents>=100){
            x=n.cents/100;
            n.cents=n.cents-x*100;
            n.dollar=n.dollar+x;
        }
        return n;
    }
};
int main(){
    int d,c;
    cout<<"Enter the dollar amount and cents for first person : ";
    cin>>d;
    cin>>c;
    money m1=money(d,c);
    cout<<"Enter the dollar amount and cents for second person : ";
    cin>>d;
    cin>>c;
    money m2=money(d,c);
    money m3;
    m3=m1+m2;
 cout<<m1.showmoney()<<"$ + "<<m2.showmoney()<<"$ = "<<m3.showmoney()<<"$";
}