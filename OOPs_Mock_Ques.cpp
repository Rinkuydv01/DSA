#include <bits/stdc++.h>
using namespace std;

class car{
  public:
  int speed;
  int time;
  int res;
  void fetchdata(){
    int a,b;
    cout<<"Enter speed in km/h: ";
    cin>>a;
    cout<<"Enter time in hours: ";
    cin>>b;
    speed=a;
    time=b;
  }

  int calc(){
    res=speed*time;
    return res;
  }
  void display() {
    cout<<"Speed of car: "<<res;
  }
};
int main() {
  car c;
  c.fetchdata();
  c.calc();
  c.display();

  return 0;
}
