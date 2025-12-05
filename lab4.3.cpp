#include <array>
using namespace std;
#include <span>
#include <cassert>
#include <iostream>


void infin_cycle ( span<int> inputOutput, span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());

    size_t i = 0;

    while(true)
    {
        if(i>= inputOutput.size())
        break;

        inputOutput[i] *= coefficients[i];
        i++;
    }

}

void while_with_cond (span<int> inputOutput, span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());

    size_t i = 0;

    while(i<inputOutput.size())
    {
        inputOutput[i] *= coefficients[i];
        i++;
    }


}

void cycle_for (span<int> inputOutput, span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());
    for(size_t i = 0; i< inputOutput.size(); i++ )

    {       
         inputOutput[i] *= coefficients[i];
    }

}
int main()
{
    int a[] = { 1, 2, 3 };
    int b[] = { 10, 20, 30 };

    std::span<int> s1(a);
    std::span<int> s2(b);

    infin_cycle(s1, s2);

    for (int x : a) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
