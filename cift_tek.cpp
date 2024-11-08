#include <iostream>
#include <math.h>

int main()
{
int sayi , sonuc;
std::cout << "bir sayi giriniz" << std::endl;
std::cin >> sayi;
fmod(sayi,2) == 0 ? std::cout << "girilen sayi çift" : std::cout << "girilen sayi tek ";
    return 0;
}
