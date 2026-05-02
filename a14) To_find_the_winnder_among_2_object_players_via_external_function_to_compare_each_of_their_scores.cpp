#include<iostream>
using namespace std;
class player{
    public: 
        string name;
        int score;
    player(){
        name="UNKNOWN";
        score=0;
    }
    player(string Name,int Score){
        name=Name;
        score=Score;
    }
};
void winner(player p1,player p2){
    if(p1.score>p2.score){
        cout<<p1.name<<" is the winner !!!";
    }else if(p2.score>p1.score){
        cout<<p2.name<<" is the winner !!!";
    }else{
        cout<<"There is a tie between both players !!!! ";
    }
}
int main()
{
    string name;
    int s;
    cout<<"Enter name and score of first player : ";
    cin>>name;
    cin>>s;
    player p1=player(name,s);
    cout<<"Enter name and score of second player : ";
    cin>>name;
    cin>>s;
    player p2=player(name,s);
    winner(p1,p2);
}