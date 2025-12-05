#include <iostream>
using namespace std;

struct Leg
{
    int length;
};

struct Arm
{
    int power;
};

struct Person
{
    array<Leg, 2> legs;
    Arm arms[2];
    
};

//void armPower (Arm&  arms )
// {
//     arms.power +=2;

// }
// int main()
// {
//     Person person;
//     Arm* firstArm = &person.arms[0];
//     Arm& armadress = *firstArm;
//     cout<< "адресс через ссылку :"<< firstArm <<endl; 

//     person.arms[0].power = 5;
//     armPower(person.arms[0]);
//     cout<<" first arm power"<< armPower<< endl;
// }

void armPower (Arm*  arms )
{
    arms->power +=2;
}
int main()
{
    Person person;
    person.arms[0].power =5;
    armPower(&person.arms[0]);
    cout<<" first arm power"<< person.arms[0].power << endl;
}