//
//  Pracownik.cpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#include "Pracownik.hpp"
const char* Pracownik::Imie () const{
    
    return m_Imie.Zwroc();
};
const char* Pracownik::Nazwisko () const{
    
    return m_Nazwisko.Zwroc();
};
void Pracownik::Imie (const char* nowe_imie){
    m_Imie.Ustaw(nowe_imie);
};

void Pracownik::Nazwisko (const char* nowe_nazwisko){
    m_Nazwisko.Ustaw(nowe_nazwisko);
};
void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok){
    
    m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
};
void Pracownik::Wypisz() const{
    m_Nazwisko.Wypisz();
    cout<<"\t";
    m_Imie.Wypisz();
    cout<<"\t";

    m_DataUrodzenia.Wypisz();
    cout<<"\n";
};
void Pracownik::Wpisz(){
    cout<<"Podaj imie\n";
    m_Imie.Wpisz();
    cout<<"Podaj nazwisko\n";
    m_Nazwisko.Wpisz();
    cout<<"Podaj data\n";
    m_DataUrodzenia.Wpisz();
    
};
int Pracownik::sprawdz_imie (const char* por_imie) const{
    return m_Imie.SprawdzNapis(por_imie);
};

int Pracownik::sprawdz_nazwisko (const char* por_nazwisko) const{
    return m_Nazwisko.SprawdzNapis(por_nazwisko);
};


int Pracownik::Porownaj(const Pracownik& wzorzec) const {
    
    int imie, nazwisko, data;
    imie = sprawdz_imie(wzorzec.Imie());
    nazwisko = sprawdz_nazwisko(wzorzec.Nazwisko());
    data = m_DataUrodzenia.Porownaj(wzorzec.m_DataUrodzenia);
    
    
    if (nazwisko == 0) {
        if (imie == 0) {
            return data;
        }
        else
            return imie;
    }
    else return nazwisko;
    
    
};



