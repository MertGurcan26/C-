
#include <iostream>
#include<cmath>//math fonksiyonudur
int main()
{
    std::cout << "sayilar \tkarekök\t\tdördüncükok" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
 for(int i=10;i<=20;i++){
      double karekok = sqrt(i);
      double dorduncukok = pow(i,0.25);
      
      std::cout << i << "\t\t" << karekok << "\t\t" <<  dorduncukok <<  std::endl;
  

 }

    return 0;
}
