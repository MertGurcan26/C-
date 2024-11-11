

#include <iostream>

int main()
{
    int sifre2 , i = 3  ,  sifre1 , kalanhak = 0;
   char kuladı[20] , kadı[20];
   
    std::cout << "kullanıcı adınızı belirleyiniz" << std::endl;
    std::cin >> kuladı;
    std::cout << "şifrenizi belirleyiniz" << std::endl;
    std::cin >> sifre2;
   
       std::cout << "\nHOŞGELDİNİZ" << std::endl;
       
       while(kalanhak<i)
       {
                  std::cout << "kullanıcı adınızı giriniz" << std::endl;
                  std::cin >> kadı;
                  std::cout << "sifrenizi giriniz"  << std::endl;
                  std::cin >> sifre1;
                  if(kadı == kuladı && sifre2  == sifre1)
                  {
                     std::cout << "tebbrikler" << std::endl;
                     break;
                  }
                  else
                  {
                    i--;
                    if(i>0)
                    {
                             std::cout << "tekrar deneyiniz" << std::endl;
                   std::cout << "kalan hakkıniz = " << i <<  std::endl;
                        
                    }
              
                   

  
                  }
                  
                  
       }
       if(i==0)
       {
                  std::cout << "GİRİŞ REDDEDİLDİ" << std::endl;

       }

       

   
    return 0;
}
