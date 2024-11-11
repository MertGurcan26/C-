

#include <iostream>

int main()
{
    int sayac = 1 , toplam = 0;
    char cevap;
    do
    {
        while(sayac<=5)
        {
            int sayi;
            std::cout << sayac << ".sayiyi giriniz" << std::endl;
            std::cin >> sayi;
            toplam += sayi;
            sayac++;
        }
        std::cout << "Toplam" << toplam << std::endl;
        std::cout << "Devam etmek ister misiniz??(y/n)" << std::endl;
                std::cin >> cevap;

        if(cevap=='n' || 'N')
        {
            std::cout << "ÇIKIŞ YAPILIYOR" << std::endl;
            break;
        }
        sayac = 1;
        toplam = 0;
        
    }while(cevap == 'y' || 'Y');

    return 0;
}
