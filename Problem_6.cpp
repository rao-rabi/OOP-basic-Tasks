// Problem 6: Abstract Class and Interface Create an abstract base class called Vehicle with pure virtual functions for start() and stop(). Then, create two classes, Car and Motorcycle, that inherit from Vehicle and implement the start() and stop() functions differently for each vehicle type.

#include <iostream>
using namespace std;

class Vehicle
{
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : Vehicle
{
public:
    void start()
    {
        cout << "Most cars use a key or a key fob to start the engine. When the driver turns the key or presses the start button, the electrical system sends power to the starter motor, which engages with the flywheel to turn the engine over. This process starts the internal combustion engine, and the car is ready to be driven." << endl;
    }
    void stop()
    {
        cout << "To stop a car, the driver typically applies pressure to the brake pedal, which activates the hydraulic brake system. The brake pads or shoes press against the brake rotors or drums, creating friction and slowing down the vehicle." << endl;
    }
};

class Motorcycle : Vehicle
{
public:
    void start()
    {
        cout << "Motorcycles usually have a key or a button to start the engine. When the rider turns the key or presses the start button, it activates the starter motor, which turns the engine over. Some motorcycles may have a kickstart mechanism that requires the rider to manually kick down on a lever to start the engine." << endl;
    }
    void stop()
    {
        cout << "Stopping a motorcycle is similar to stopping a car. The rider applies pressure to the brake lever(s) or pedal, which activates the hydraulic brake system. The brake pads or shoes then make contact with the brake disc or drum, slowing down the motorcycle. " << endl;
    }
};

int main()
{
    cout << "Cars: " << endl;
    Car Civic;
    cout << "Start: " << endl;
    Civic.start();
    cout << "Stop: " << endl;
    Civic.stop();
    cout << "Mototcycles: " << endl;
    Motorcycle YBR;
    cout << "Start: " << endl;
    YBR.start();
    cout << "Stop: " << endl;
    YBR.stop();
    return 0;
};