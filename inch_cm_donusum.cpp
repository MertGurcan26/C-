#include <iostream>

int main()
{
    float cm , inch , sonuc;
    
    std::cout<<"değer giriniz";
    std::cin>>inch;
    cm = inch * 2.54;
    std::cout<< inch<<"\ndönüşüm = "<<cm;

    return 0;
}
