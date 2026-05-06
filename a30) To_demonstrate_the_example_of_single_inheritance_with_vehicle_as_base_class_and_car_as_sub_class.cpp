#include<iostream>
using namespace std;
class vehicle{
    public :
        string fuel_type;
        int gear;
        vehicle(){
            fuel_type="Unknown";
            int gear=0;
        }
        vehicle(string fuel_type,int gear){
            this->fuel_type=fuel_type;
            this->gear=gear;
        }
        void sound(){
            cout<<"\n\nVroom !!! Vroom !!!!";
        }
};
class car:public vehicle{
    public:
        string brand_name;
        car(){
            brand_name="Unknown";
        }
        car(string Brand_name,string Fuel_type,int Gear){
            brand_name=Brand_name;
            fuel_type=Fuel_type;
            gear=Gear;
        }
        void introduce(){
            cout<<"Car Brand : "<<brand_name<<"\nFuel Type : "<<fuel_type<<"\nGear : "<<gear;
        }
};
int main()
{
    string fuel_type,brand_name;
    int gear;
    cout<<"Enter car brand name : ";
    cin>>brand_name;
    cout<<"Enter fuel type of car : ";
    cin>>fuel_type;
    cout<<"Enter no of gears : ";
    cin>>gear;
    car c = car(brand_name,fuel_type,gear);
    c.introduce();
    c.sound();

}