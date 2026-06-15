#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() 
{
    cout << "inserisci il nome della figura" << endl;
    string nome_figura;
    cin >> nome_figura;
    if (nome_figura == "triangolo")
    {
        float lato;
        float altezza;
        cout << "inserisci il lato" << endl;
        cin >> lato;
        cout << "inserisci l'altezza" << endl;
        cin >> altezza;
        cout << (lato * altezza / 2) << endl;
        return 0;
        
    }
 else if  (nome_figura == "rettangolo")
{
    float lato2;
    float altezza2;
    cout << "inserisci il lato " << endl;
    cin >> lato2;
    cout << "inserisci l'altezza" << endl;
    cin >> altezza2;
    cout << (lato2 * altezza2) << endl;
    return 0;
}
else if (nome_figura == "quadrato")
{
 float lato3;
 cout << "inserisci il lato" << endl;
 cin >> lato3;
 cout << pow(lato3 , 2) << endl;
 return 0;
}
else if (nome_figura == "parallelogrammo")
{
    float lato4;
    float altezza4;
    cout << "inserisci il lato" << endl;
    cin >> lato4;
    cout << "inserisci l' altezza" << endl;
    cin >> altezza4;
    cout << (lato4 * altezza4);
    return 0;
} 
else if (nome_figura == "trapezio")
{
    float basemaggiore;
    float baseminore;
    float altezza6;
    cout <<"inserisci la base maggiore" << endl;
    cin >> basemaggiore;
    cout << "inserisci la base minore" << endl;
    cin >> baseminore;
    cout <<"inserisci l'altezza" << endl;
    cin >> altezza6;
    float somma = basemaggiore + baseminore;
    cout << ( somma * altezza6 / 2) << endl;
    return 0;
}
else if (nome_figura == "rombo")
{
    float lato5;
    float altezza7;
    cout << "inserisci il lato" << endl;
    cin >> lato5;
    cout << "inserisci l'altezza" << endl;
    cin >> altezza7;
    cout << lato5 * altezza7 << endl;
    return 0;
}
else
{
    std::cout << "figura non valida o non ancora inserita, questa è la lista di figure inserite :" << std::endl;
    std::cout << "triangolo, rettangolo, quadrato, parallelogrammo, rombo, trapezio" << std::endl;
    return 0;
}
return 0;
}