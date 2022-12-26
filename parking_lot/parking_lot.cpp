#include<bits/stdc++.h>
#include "adress.cpp"
#include "parking_floor.cpp"
using namespace std;
class ParkingLot{
    string name;
    Address address; 
    list<ParkingFloor> floors;
    ParkingLot(string name,Address address, list<ParkingFloor> floors){
        this->name=name;
        this->address=address;
        this->floors=floors
    }
    
    

};