#include <iostream>

using namespace std;

class Car{
public: 
    int speed;
    int& power;
    const int max_speed;
    Car(): max_speed(30),power(speed){

    }
    ~Car(){
        cout << "안뇽~"<< endl;
    }
    void printthis()
    {
        cout << this << endl;
    }
    void speedup()
    {
        speed++;
    }
};


int main()
{
    Car car1;
    Car car2;

    

    car1.speed = 10;
    car2.speed = 0;
    

    car1.speedup();
    car2.speedup();

    car1.printthis();
    car2.printthis();
    // cout << car1.speed << endl;
    // cout << car2.speed << endl;




}

