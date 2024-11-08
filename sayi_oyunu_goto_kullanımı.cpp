#include <iostream>
#include <math.h>
#include<cstdlib>
int main()
{
int gizli , tahmin , yanit ;
srand(time(0));
gizli = rand() % 100;
std::cout << gizli << std::endl;//denemek amaçlı açık yazdırdım
a:
std::cout << "tahmin değerini giriniz" << std::endl;
std::cin >> tahmin;

if(tahmin==gizli)
{
    std::cout << "Doğru tahmin" << std::endl;
    return 0;
}
else if(tahmin < gizli) {
    std::cout << "daha büyük sayi giriniz" << std::endl;
    goto a;
} 
else if(tahmin > gizli) {
    std::cout << "daha küçük sayi giriniz" << std::endl;
     goto a;
}
    return 0;
}
