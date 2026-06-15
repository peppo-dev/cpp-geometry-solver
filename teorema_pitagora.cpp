#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
 char y_or_n;
 cout << "Hai già i due cateti?" << endl;
 cout << "y or n" << endl;
 cin >> y_or_n;
 cin.ignore();
if (y_or_n == 'y')
{
   int cateto_maggiore2;
 int cateto_minore2;
 cout << "inserisci valore del cateto maggiore" << endl;
 cin >> cateto_maggiore2;
 cout << "inserisci valore del cateto minore" << endl;
 cin >> cateto_minore2 ;
 double cateto_maggiore3= pow(cateto_maggiore2, 2);
 double cateto_minore3= pow(cateto_minore2, 2 );
 double ipotenusa = sqrt(cateto_maggiore3 + cateto_minore3);
 cout << ipotenusa << endl;
}
else if (y_or_n == 'n')
{
 int ipotenusa3;
 int cateto2; // maggiore o minore
 cout << "inserisci valore dell'ipotenusa" << endl;
 cin >> ipotenusa3;
 cout << "inserisci valore del cateto " << endl;
 cin >> cateto2;
 double ipotenusa33 = pow(ipotenusa3, 2 ); // ipotenusa al quadrasto 
 double cateto_minore4 = pow(cateto2, 2 ); // cateto al quadrato
 double cateto_ = sqrt(ipotenusa33 - cateto_minore4); // calcolo del cateto mancante
 cout << cateto_ << endl; // output
}
else
{
    cout << "input errato, inserisci tra y o n" << endl;
}
return 0;
}

