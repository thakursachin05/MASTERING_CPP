#include<bits/stdc++.h>
using namespace std;


class Vehicle{
  
    public :
        string manufacturer;
        string fuel;

        void setVehicleProperty(string manufacturer,string fuel){
            this->manufacturer = manufacturer;
            this->fuel = fuel;
        }
        void getVehicleDetails(){
            cout<<manufacturer<<" "<<fuel<<endl;
        }

};

class Car : public Vehicle {
    private :
        string name;
    public :
        void setCarName(string name){
            this->name = name;
        }

        void getCarDetails(){
            cout<<name<<" Car"<<endl;
            cout<<"Fuel Type : "<<fuel<<", "<<manufacturer<<endl;

        }
};

class Bike : public Vehicle {
     private :
       string name;
    public :
        void setBikeName(string name){
            this->name = name;
        }

        void getBikeDetails(){
            cout<<name<<" Bike"<<endl;
            cout<<"Fuel Type : "<<fuel<<", "<<manufacturer<<endl;
        }
};

class Person{
    private :
        string name;
        Car car;
        Bike bike;
    public :
        void setPersonName(string name){
            this->name = name;
        }
        void setCarProperty(string name,string fuel,string manufacturer){
            car.setCarName(name);
            car.setVehicleProperty(manufacturer,fuel);
        }   
        void setBikeProperty(string name,string fuel,string manufacturer){
            bike.setBikeName(name);
            bike.setVehicleProperty(manufacturer,fuel);
        }   

        void getPersonDetails(){
            cout<<"Name : "<<name<<endl;
            cout<<"Vehicles Owned"<<endl;
            car.getCarDetails();
            bike.getBikeDetails();
        }
        
};


int main(){
  Person person1;
  person1.setPersonName("Sourabh");
  person1.setCarProperty("Honda Accord","Diesel","Imported");
  person1.setBikeProperty("Duccati","Petrol","Made In India");


  person1.getPersonDetails();
}