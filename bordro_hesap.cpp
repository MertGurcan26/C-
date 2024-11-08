

#include <iostream>
#include <math.h>
#include<cstdlib>
int main()
{
const int s_ucret = 50;
char adi[22];
char s_adi[22];
std::cout << "*****ücret hesabı*****" << std::endl;
float saat ,topsatis,prim ,ucret;
std::cout << "satış elemanının adını giriniz" << std::endl ; std::cin >> adi;
std::cout << "satış elemanının soyadını giriniz" << std::endl;std::cin >> s_adi;
std::cout << "çalıştığı toplam saati giriniz" << std::endl;std::cin >> saat;
ucret = s_ucret * saat;
std::cout << "satış tutarını giriniz" << std::endl;std::cin >> topsatis;

if(topsatis>5000)
{
    prim = 1000;
    
}
else if(topsatis > 2500 & topsatis <=5000)
{
    prim = 500;
}
else{
    prim = 0;
}

std::cout << "\n*****ÖDENECEK ÜCRET\n" << std::endl;
std::cout <<"\nsatış elemanı\n" <<adi <<" " << s_adi << std::endl;
std::cout <<"\nmaaş bordrosu\n"  << std::endl;
std::cout << "--------\n" << std::endl;
std::cout << "\nucret = " << ucret << "alacağı prim" << prim <<std::endl;
std::cout << "toplam = "<< ucret + prim;
    return 0;
}
