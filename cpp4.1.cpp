#include <iostream>
using namespace std;

struct Fruits
{
    int apples;
    int pears;
    int oranges;
};


int main()
{
    Fruits fruit;

    cout << "Apples:";
    cin >> fruit.apples;

    cout << "Pears:";
    cin >> fruit.pears;

    cout << "Oranges:";
    cin >> fruit.oranges;

    bool result = true ;

    
        bool appleCount= fruit.apples>5;
        bool pearCount= fruit.pears <8;
        bool orangeCount= fruit.oranges == fruit.apples * 2;  
    
        result = appleCount&&pearCount&&orangeCount;

        if(result)
        {
            cout<<"Hello"<<endl ;
        }

    return 0;
}