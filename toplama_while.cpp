
#include <iostream>
#include<cmath>//math fonksiyonudur
int main()
{
int sayi , i = 1 ,sayi2 , toplam=0;
std::cout << "kaç sayi girmek istediğiniz belirtin" << std::endl;
std::cin >> sayi2;
while(i<=sayi2)
{
     std::cout << i << ".sayinizı giriniz" << std::endl;
 std::cin >> sayi;
 i++;
 toplam += sayi;
}
std::cout << "toplamınız ="  << toplam <<  std::endl;

 
    return 0;
}
