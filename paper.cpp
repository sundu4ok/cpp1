#include <iostream>
using namespace std;

struct Pachka
{
    int salfetkiCount;

};
void useSalfetki(Pachka& s)
{


        if (s.salfetkiCount > 0)
         {
        s.salfetkiCount -= 1;
        } 
    


}

int main()
{
    Pachka p1;
    Pachka p2;
    Pachka s; 
    p1.salfetkiCount = 10;
    p2.salfetkiCount = 7;
     
    cout<< "papers in pachka 1 before use: "<< p1.salfetkiCount <<endl;
    cout<< "papers in pachka 2 before use: "<< p2.salfetkiCount <<endl;

    useSalfetki(p1);
    useSalfetki(p2);
    cout<< "papers in pachka 1 after use: "<< p1.salfetkiCount <<endl;
    cout<< "papers in pachka 2 after use: "<< p2.salfetkiCount <<endl;
}