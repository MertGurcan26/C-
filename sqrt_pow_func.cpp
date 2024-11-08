#include <iostream>
#include <math.h>

int main()
{
  int sayi1 , sayi2 , toplam , sonuc , x;
  
  std::cout << "sayi1" << std::endl;
  std::cin>>sayi1;
  std::cout<< "sayi2" << std::endl;
  std::cin>>sayi2;
  sayi1 = sayi1%5;
  sayi2 = sayi2%3;
  toplam= sayi1 + sayi2;
  sonuc = pow(toplam,3);//kuvvet alır birincisi taban iknci üsttür
  std::cout<<"\ntoplam=\t" << toplam;
  std::cout<<"\nsonuc=\t"<< sonuc;
  x = sqrt(9);
  std::cout<<"\nx=\t"<< x;

    return 0;
}
