#include <iostream>
using namespace std;

struct Prices
{
    int drinks;
    int firstDish;
    int secondDish;
};

struct Order
{
    int drinks;
    int firstDish;
    int secondDish;
};

int customerTotal (Prices prices, Order order)
{
   return (prices.drinks * order.drinks) +
          (prices.firstDish * order.firstDish) +
          (prices.secondDish * order.secondDish);
}
void calcAndPrintTotal(Prices prices, Order order,int num)
{
    int result;
    result = customerTotal(prices,order);
    cout<< "Client " << num << " total: "<< result<<endl;
}

int main()
{
    Prices prices = {5, 7, 10};
    Order client1  = {100, 0, 50};
    Order client2 = {0, 20, 30};
    calcAndPrintTotal(prices,client1,1);
    calcAndPrintTotal(prices,client2,2);
    return 0;

}
