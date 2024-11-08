#include <iostream>
#include <math.h>

int main()
{
  int sozlu1 , sozlu2 , vize , final;
  
  std::cout << "sözlü 1'i giriniz" << std::endl;
  std::cin >> sozlu1;
  std::cout << "sözlü 2 giriniz" << std::endl;
  std::cin >> sozlu2;
  std::cout << "vize notu giriniz" << std::endl;
  std::cin >> vize;
  std::cout << "final notu giriniz" << std::endl;
  std::cin >> final;
  
    std::cout << "sözlü ortalamanız = \t" << (sozlu1 + sozlu2 / 2) << std::endl;
    std::cout << "vize ve sözlü ortalamanız = \t" << (sozlu1 + sozlu2 +vize / 3) << std::endl;

        std::cout << "v = \t" << ((sozlu1 + sozlu2 / 2)*40)/100 << std::endl;
         std::cout << "final ortalamanız = \t" << (final*60)/100 << std::endl;
       std::cout << "toplam ortalamanız = \t" <<(((sozlu1 + sozlu2 / 2)*40)/100) + ((final*60)/100 )  << std::endl;


   

    return 0;
}
