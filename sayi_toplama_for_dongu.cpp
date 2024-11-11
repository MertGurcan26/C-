
#include <iostream>

int main()
{
    int baslangıc = 0 , bitis=0 , toplam = 0;
    std::cout<<"başlangıç değerini giriniz";
    std::cin >> baslangıc;
    std::cout << "bitiş değerini giriniz" << std::endl;
std::cin >> bitis;

for(int i = baslangıc ; i <=bitis;i++)
{
    toplam += i ;
    
}
std::cout << baslangıc <<"-" << bitis << "arası değerlerin toplamı = " << toplam << std::endl;
    return 0;
}
