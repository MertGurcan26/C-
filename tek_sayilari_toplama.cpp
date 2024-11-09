#include <iostream>
#include <math.h>
#include<cstdlib>
int main()
{
int n , toplam = 0, i=1;
std::cout << "bir sayi giriniz" << std::endl;std::cin >> n;
a:
if(i<=n)
{
    toplam +=i; //toplam = toplam+i
    i+=2;
    goto a;
}
std::cout << n <<"sayisina kadar olan tek sayiların toplamı = " <<toplam<< std::endl;

    return 0;
}
