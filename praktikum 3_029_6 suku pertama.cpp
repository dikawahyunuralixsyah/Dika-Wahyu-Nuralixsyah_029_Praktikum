#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int i,kuadrat,jmlh_bilangan,jmlh_kuadrat;
    float akar,jmlh_akar;
    cout << "6 SUKU PERTAMA ";
    
    jmlh_bilangan=0;
    jmlh_kuadrat=0;
    jmlh_akar=0;
    
    for (i=1;i<=6;i++) {
    kuadrat=i*i*i;
    akar = sqrt(i);
    jmlh_bilangan=i;
    jmlh_kuadrat=jmlh_kuadrat+kuadrat;
    
    cout << " Suku ke- " << i <<" = "<<kuadrat<<" "<<endl;
    }
    cout << " Jumlah suku ke- "<< jmlh_bilangan <<" = "<<jmlh_kuadrat;

    return 0;    
}
