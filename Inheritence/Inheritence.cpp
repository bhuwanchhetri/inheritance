

#include <iostream>
using namespace std;

class Vehicle {
public:
    int mileage = 30;
    int cost = 500;

    void put_vehicle_details() {
        cout << "I am a vehicle.";
        cout << "\nmileage of vehicle is:" << mileage << ".";
        cout << "\nCost of vehicle is:" << cost << ".";
    }
};

class Car : public Vehicle {  // defining child class, inheriting public class Vechicle
public:
    string color = "Blue";
    int tyre = 4;

    void show_car_details() {
        cout <<"\nI am a car.";
        cout << "\nColor of car is " << color << ".";
        cout << "\nNumber of tyres in car are " << tyre << ".";
    }

}; 

    int main() {
        Car c1; //creating object

       c1.put_vehicle_details();
        c1.show_car_details();
        return 0;




};
