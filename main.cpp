//
//  main.cpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#include <iostream>
#include "ListaPracownikow.hpp"
#include "Pracownik.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    ListaPracownikow A;
    Pracownik B;
    int wybor;
    char imie[10], nazwisko[10];
    
    while(1){
        cout<<"1 - Dodaj pracownika\n"; 
        cout<<"2 - Wyswietl pracownikow\n";
        cout<<"3 - Usun pracownika\n";
        cout<<"4 - Szukaj pracownika\n";

        cin>>wybor;
        
        switch (wybor) {
            case 2 :
                A.WypiszPracownikow();
                break;
            case 1 :
                B.Wpisz();
                A.Dodaj(B);
                break;
          case 3:
                B.Wpisz();
                A.Usun(B);
                break;
            case 4:
                
                cout<<"PODAJ IMIE :\n";
                cin>>imie;
                cout<<"PODAJ NAZWISKO :\n";
                cin>>nazwisko;
               
                if(A.Szukaj(nazwisko, imie)==NULL)
                    cout<<"\n\nNIE MA TAKIEGO PRACOWNIKA\n\n";
            else
                {
                    cout<<"PRACOWNIKA ZNALEZIONO\n";
                    B=*A.Szukaj(nazwisko, imie);
                    B.Wypisz();
                }
        }
        
        
        
        
    }
    return 0;
}
