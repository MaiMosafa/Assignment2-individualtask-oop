#include <iostream>

using namespace std;

class Odometer{
private:
    double fuelefficiency, milesdriven;
public:
    Odometer(){
        fuelefficiency=0.0;
        milesdriven=0.0;
    }
    Odometer(double fuelefficiency,double milesdriven){
        this->fuelefficiency=fuelefficiency;
        this->milesdriven=milesdriven;
    }
    void setfuelefficiency(double fuelefficiency){
        this->fuelefficiency=fuelefficiency;
    }
    double getfuelefficiency(){
        return fuelefficiency;
    }
    void setMilesDriven(double milesdriven){
        this->milesdriven=milesdriven;
    }
    double getMilesDriven(){
        return milesdriven;
    }

    void reset(){
        milesdriven=0.0;
    }
    double gallon(){
        double gallon=milesdriven/fuelefficiency ;
        return gallon;
    }
    void addmiles(double newmiles){
        milesdriven+=newmiles;
    }

};

int main()
{
    Odometer O1;
    O1.setfuelefficiency(2);
    O1.addmiles(20);
    O1.addmiles(20);
    O1.addmiles(10);
    cout<<O1.gallon()<<endl;
    O1.reset();
    cout<<O1.gallon()<<endl;
}
