
     #include <iomanip>
#include <iostream>
using namespace std;


int main()
{
    int N,cem1,ciq,vin,dez,cic,dois,um;
    cin >> N;
    
    cem1 =N/100;
    ciq =(N-cem1*100)/50;
    vin =(N-cem1*100-ciq*50)/20;
    dez =(N-cem1*100-ciq*50-vin*20)/10;
    cic =(N-cem1*100-ciq*50-vin*20-dez*10)/5;
    dois =(N-cem1*100-ciq*50-vin*20-dez*10-cic*5)/2;
    um =N-cem1*100-ciq*50-vin*20-dez*10-cic*5-dois*2;
    
    cout << cem1 <<" nota(s) de R$ 100,00"<< endl;
    cout << ciq <<" nota(s) de R$ 50,00"<< endl;
    cout <<  vin <<" nota(s) de R$ 20,00"<< endl;
    cout << dez <<" nota(s) de R$ 10,00"<< endl;
    cout << cic <<" nota(s) de R$ 5,00"<< endl;
    cout << dois <<" nota(s) de R$ 2,00"<< endl;
    cout << um <<" nota(s) de R$ 1,00"<< endl;

     system("pause");
}
