#include <iostream> 

void a()
{
    int number = 15;

    
    if (number == 5)
    {
         std::cout << "The number is 5" << std::endl; 
         return ;      
    }
    
    std::cout << "The number is not 5" << std::endl;

    if (number % 2 == 1)
        {
            std::cout << "The number is not divisible by 2" << std::endl;
            return ;
        }
    std::cout << "The number is divisible by 2" << std::endl;

     if (number == 6)
            
    {
         std::cout << "The number is 6" << std::endl;
         return ;
    }
}

int main()
{
   a();
   std::cout<< "Hello"<<std::endl;

}