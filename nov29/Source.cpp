#include <iostream>
#include <vector>

using namespace std;

template <typename T> 
T addTwo(T a)
{
    return a + 2; 
}

template<typename T> 
class SomeClass
{
public:  
    T x; 
};

auto returnSomething()
{
    return 42; 
}

int main()
{

    auto a = 5; 
    auto b = &a; 
    auto c = 5.0; 
    auto d = "5.0"; 

    cout << typeid(b).name() << endl;


    //vector<string> listOfWords; 
    ////listOfWords.

    //vector<int> listOfNums; 

    //SomeClass<int> intSCObject;
    //intSCObject.x = 32;

    //SomeClass <string> stringSCObject; 
    //stringSCObject.x = 64;

    //cout << stringSCObject.x << endl; 


    //int anInt = 42; 
    //double aDouble = -53.3; 
    //char aCharacter = 'v';

    //cout << addTwo(anInt) << endl; 
    //cout << addTwo(aDouble) << endl; 
    //cout << addTwo(aCharacter) << endl;

    return 0;
}