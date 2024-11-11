
#include <iostream>

int main()
{
    int n , sayac;
std::cout <<"bir sayi giriniz"<< std::endl;
std::cin >> n;

for(int i=2; i<n; i++)
{ 
    sayac = 0;
    for(int j = 2;j<i;j++)
    {
        if(i%j==0)
        {
            sayac++;
            break;
        }
    }
        if(sayac==0)
    {
        std::cout << i << " " << std::endl;
        
    }
        
    
    
}
    return 0;
}
