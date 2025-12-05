#include <iostream>
int main()
{   // 00 00 00 00

    int i;
    i=69;
    int number = 72;
    i+=number;
    std::cout << i << std::endl;

    int arr[3]{};
    arr[0] = 0x00000000;
    arr[1] = 0x00000000;
    arr[2] = 0x00000000;
    std::cout <<"arr:"<< arr[0] << arr[1] << arr[2] << std::endl;
    
    int* iPointer = &i;
    *iPointer = 15;
    std::cout << i << std::endl;
    iPointer = arr;
    iPointer= iPointer + 2;
    std::cout << iPointer << std::endl;
    arr[0]= 5;
    *iPointer = 6;
    std::cout <<"arr:"<< arr[0] << arr[1] << arr[2] << std::endl;
    return 0;
}