#include <string.h>
#include <iostream>

struct TwoInts
{
    int a;//объявляем две переменные 
    int b;
};

struct StructWithArray
{
    int arr[4];// создаем массив 
    int* someNumber;// создаем указател на инт
};

int main()
{
    TwoInts i2 = { };// заполняем i2 нулями
    i2.a = 5;// присваиваем значение
    i2.b = 7;

    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;// вывод значений
    
    StructWithArray s = { };
    s.arr[0] = 10; // присваиваем значение первому элементу массива

    StructWithArray s1 = { };
    s1.arr[0] = 15;// присваиваем значение второму элементу массива

    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;// присваиваем значение первому элементу массива через указатель

    std::cout << s.arr[0] << std::endl;// выводит 10
    s.arr[0] = 25;// изменяем значение первого элемента массива
    std::cout << s.arr[0] << std::endl;// выводит 25
    sPointer->arr[0] = 30;// изменяем значение первого элемента массива через указатель
    std::cout << s.arr[0] << std::endl;// вывод 30

    sPointer = &s1;// изменяем указатель на структуру s1
    sPointer->arr[0] = 35;// изменяем на 35
    std::cout << s.arr[0] << std::endl;// вывод 10
    std::cout << s1.arr[0] << std::endl;// вывод 35

    StructWithArray structArray[2] = { };// создаем новый массив, заполняем нулями
    structArray[0].arr[3] = 77;// четвертый элемент массива равен 77
    structArray[1].someNumber = &structArray[0].arr[3];// сохраняем указатель на четвертый эл

    sPointer = &s;
    int* pointer = &sPointer->arr[3];//pointer указывает на s.arr[3]
    s.arr[3] = 72;//присваиваем ему значение 72
    std::cout << *pointer;// вывод 72

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));// все элементы арр заполняются нулями 
    return 0;
}