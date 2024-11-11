

#include <iostream>

int main()
{
   int i , enbuyuk , sira , Toplam = 0;
   int a[5];
   int diziboyutu = sizeof(a);//her eleman 4 byte bu yüzden 20 toplam byte yazdırır
   std::cout << diziboyutu << std::endl;
   for(i=0;i<5;i++)
   {
       std::cout << i + 1 << ". sayiyi giriniz:" <<  std::endl;
       std::cin >> a[i];
       Toplam += a[i];
   }
   std::cout <<"Toplam = " << Toplam <<  std::endl;
    return 0;
}
