#include <iostream>

#include<vector>

using namespace std;


//class demoThisClass
//{
//public:
//    int a = 44; 
//    int b = 55;// , string c;
//
//    void printThis()
//    {
//        cout << this << endl; 
//    }
//
//    void setAll(int a, int b)
//    {
//        this->a = a; 
//        //a = a; 
//        
//        this->b = b; 
//    }
//
//
//};
//
////riff
////class Person
////{
////    //friend class A; 
////    friend void callPerson(const Person& pObj);
////public: 
////    string name; 
////private:
////    string number = "867-5309";
////
////
////};
//
//
//
////friend 
//
////void callPerson(const Person& personObj)
////{
////    cout << "Calling your phone number : " << personObj.number << endl; 
////}

//class Person
//{
//    double bankBalance; 
//    int ratingOneToTen; 
//    //
//};

class Vehicle
{
private:
    double cost;
    int mileRange;
public:
    Vehicle() {}; //leaving empty
    Vehicle(double cost, int mileRange)
    {
        this->cost = cost;
        this->mileRange = mileRange;
    }
    //operator 
    bool operator == (const Vehicle& otherVehicle)
    {
        if (this->cost == otherVehicle.cost
            &&
            this->mileRange == otherVehicle.mileRange)
        {
            return true;
        }

        else
        {
            return false;
        }
    }


};


int main()
{

    Vehicle v1{ 9999.99, 350 };
    Vehicle v2{ 9999.99, 250 }; 

    if (v1 == v2)
    {
        cout << "V1 and V2 have the same specs" << endl; 
    }

    else
    {
        cout << "NOT the same vehicle" << endl; 
    }
    //demoThisClass dtcObject; 
    ////dtcObject.printThis(); 
    ////cout << &dtcObject << endl; 
    //dtcObject.setAll(1, 2); //Does "this" work?

    //cout << dtcObject.a << "\t" << dtcObject.b << endl; 


    //Person p; 
    ////callPerson(p); 
    ////cout << p.number << endl; 

    ////vector<> numsList = { 1, 2, 3, 4 };

    ////numsList.push_back(5); 


    ////friend
    ////    this

    //Person p1; 
    //Person p2; 

    //if (p1 > p2)
    //{
    //    cout << "Person 1 is GREATER THAN person 2" << endl; 
    //}

    //string someString = "alphabet";

    //cout << someString.find('a') << endl; 

    //cout << someString.find('a', 1) << endl;

    //int a = 4 + 2; 

    //cout << a << endl; 

    //string b = "4"; 
    //string c = "2"; 
    //string d = b + c; 

    //cout << d << endl; 




    return 0;
}