#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    cout << "Inserisci il nome della figura (triangolo/rettangolo/quadrato):" << endl;
    string nome_figura;
    cin >> nome_figura;

    // --- GESTIONE TRIANGOLO ---
    if (nome_figura == "triangolo")
    {
        string dato_mancante;
        cout << "Cos'è che ti manca? (lato/altezza)" << endl;
        cin >> dato_mancante;
        
        if (dato_mancante == "lato")
        {
            float area, altezza;
            cout << "Inserisci il valore dell'area:" << endl;
            cin >> area;
            cout << "Inserisci il valore dell'altezza:" << endl;
            cin >> altezza;
            cout << "Il lato misura: " << (area * 2) / altezza << endl;
            return 0;
        } 
        else if (dato_mancante == "altezza")
        {
            float area1, lato1;
            cout << "Inserisci il valore dell'area:" << endl;
            cin >> area1;
            cout << "Inserisci il valore del lato:" << endl;
            cin >> lato1;
            cout << "L'altezza misura: " << (area1 * 2) / lato1 << endl;
            return 0;        
        }
        else 
        {
            cout << "Input errato" << endl;
            return 0;
        }
    }
    
    // --- GESTIONE RETTANGOLO ---
    else if (nome_figura == "rettangolo")
    { 
        cout << "Cosa ti serve del rettangolo? (lato/altezza)" << endl;
        string cosa_serve;
        cin >> cosa_serve;
        
        if (cosa_serve == "lato")
        {
            string come_calcolare;
            cout << "Attraverso quale dato lo vuoi calcolare? (diagonale/area)" << endl;
            cin >> come_calcolare;
            
            if (come_calcolare == "diagonale")
            {
                float diagonale, altezza1;
                cout << "Inserisci il valore della diagonale:" << endl;
                cin >> diagonale;
                cout << "Inserisci il valore dell'altezza:" << endl;
                cin >> altezza1;
                
                float diagonalepot = pow(diagonale, 2);
                float altezzapot = pow(altezza1, 2);
                float sottr = diagonalepot - altezzapot;
                
                cout << "Il lato misura: " << sqrt(sottr) << endl;
                return 0; 
            }
            else if (come_calcolare == "area") 
            {
                float area2, altezza2;
                cout << "Inserisci il valore dell'area:" << endl;
                cin >> area2;
                cout << "Inserisci il valore dell'altezza:" << endl;
                cin >> altezza2;
                cout << "Il lato misura: " << area2 / altezza2 << endl;
                return 0;
            }
            else 
            {
                cout << "Metodo di calcolo non valido" << endl;
            }
        }
        else if (cosa_serve == "altezza") 
        {
            string come_lo_calcolo;
            cout << "Attraverso quale dato lo vuoi calcolare? (diagonale/area)" << endl;
            cin >> come_lo_calcolo;
            
            if (come_lo_calcolo == "diagonale") 
            {
                float diagonale, base;
                cout << "Inserisci la diagonale:" << endl;
                cin >> diagonale;
                cout << "Inserisci la base:" << endl;
                cin >> base;
                cout << "L'altezza misura: " << sqrt(pow(diagonale, 2) - pow(base, 2)) << endl;
                return 0;
            }
            else if (come_lo_calcolo == "area") 
            {
                float area, base;
                cout << "Inserisci l'area:" << endl;
                cin >> area;
                cout << "Inserisci la base:" << endl;
                cin >> base;
                cout << "L'altezza misura: " << area / base << endl;
                return 0;
            }
        }
    }
    
    // --- GESTIONE QUADRATO ---
    else if (nome_figura == "quadrato") 
    {
        string cosa_ti_serve;
        cout << "cosa ti serve? (lato/diagonale)" << endl;
        cin >> cosa_ti_serve;

        if (cosa_ti_serve == "lato")
        {
            string come_te_calco;
            cout << "come te lo vuoi calcolare? (diagonale/area)" << endl;
            cin >> come_te_calco;
            
            if (come_te_calco == "diagonale")
            {
                float diago;
                cout << "inserisci il valore della diagonale:" << endl;
                cin >> diago;
                cout << "Il lato misura: " << diago / sqrt(2) << endl;
            }
            else if (come_te_calco == "area")
            {
                float are;
                cout << "inserisci valore dell'area:" << endl;
                cin >> are;
                cout << "Il lato misura: " << sqrt(are) << endl;
            }
        }
        else if (cosa_ti_serve == "diagonale") // Spostato correttamente FUORI dal blocco lato
        {
            string come_te_caco;
            cout << "come lo vuoi calcolare? (perimetro/area)" << endl;
            cin >> come_te_caco;
            
            if (come_te_caco == "perimetro")
            {    
                float perimetro;
                cout << "inserisci il valore del perimetro:" << endl;
                cin >> perimetro;
                cout << "La diagonale misura: " << (perimetro / 4) * sqrt(2) << endl;
            }
            else if (come_te_caco == "area")
            {
                float areao;
                cout << "inserisci il valore dell'area:" << endl;
                cin >> areao;
                cout << "La diagonale misura: " << sqrt(areao * 2) << endl;
            }
        }
    }
    
    return 0;
}
