#include <iostream>

int main()
{
    int sayi1 , sayi2 , sayi3, toplam , sonuc;
    
    std::cout<<"üç sayı giriniz";
    std::cin >> sayi1;
    std::cin >> sayi2;
    std::cin >> sayi3;
    toplam = sayi3 + sayi2 + sayi1;
    sonuc = toplam*toplam;
    std::cout<<"\nTOPLAMINIZ = " << toplam;
    std::cout<<"\tsonucunuz = " << sonuc;

    sonuc > 500 ?   std::cout << "\ngeçerli" : std::cout << "\ngeçersiz";

    return 0;
}
