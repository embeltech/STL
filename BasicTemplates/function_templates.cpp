/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
template<typename T>
void print(T x)
{
    std::cout<<"Display : "<<x<<std::endl;
}

template<class T>       //typename <-> class
void printAddition(T x, T y)
{
    std::cout<<"Display addition : "<<x + y<<std::endl;
}

template<class T, typename U>
T avg(T d, U num1, U num2, U num3)
{
    T avgVal = (num1 + num2 + num3)/d;
    return avgVal;
}

int main()
{
    std::cout<<"Hello World\n";
    print<int>(25);
    double d = 123.456;
    print<double>(d);
    
    printAddition<int>(25,75);
    printAddition<float>(25.25,75.1);
    
    float average = avg<float,int>(3.0,23,24,24);
    std::cout<<"Average = "<<average<<std::endl;

    return 0;
}
