#include<iostream>
using namespace std;
class Time{
    public : 
        int hr;
        int mins;
        int s;
    Time(){
        hr=0;
        mins=0;
        s=0;
    }
    Time(int H,int M,int S){
        hr=H;
        mins=M;
        s=S;
    }
};
void addtime(Time t1,Time t2){
    int hr,mins,s;
    s=t1.s+t2.s;
    mins=s/60;
    s=s-mins*60;
    mins=mins+t1.mins+t2.mins;
    hr=mins/60;
    mins=mins-hr*60;
    hr=hr+t1.hr+t2.hr;
    cout<<"\nTotal hour : "<<hr;
    cout<<"\nTotal minutes : "<<mins;
    cout<<"\nTotal Seconds : "<<s;  
}
int main()
{
    int hr ,mins,s;
    cout<<"Enter hour:minutes:seconds for first time : ";
    cin>>hr;
    cin>>mins;
    cin>>s;
    Time t1=Time(hr,mins,s);
    cout<<"Enter hour:minutes:seconds for first time : ";
    cin>>hr;
    cin>>mins;
    cin>>s;
    Time t2=Time(hr,mins,s);
    addtime(t1,t2);

}