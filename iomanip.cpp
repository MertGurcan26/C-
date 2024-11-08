#include <iostream>
#include <math.h>
#include <iomanip>
//iomanip kullanarak setfill , setw parametrelerinin kullanımına olanak sağlar 
// setfill() ayırdığı boşlukları o karakterle doldurur
//setw() kaça karakter ayırması gerektiği ayarlanır 
//setprecision() anlamlı hane sayısını belirtir
int main()
{
std::cout << "TC KİMLİK NO:" << std::endl;
std::cout << std::setfill('*') << std::setw(11) <<std::endl;
std::cout << 77 << std::endl;
    return 0;
}
