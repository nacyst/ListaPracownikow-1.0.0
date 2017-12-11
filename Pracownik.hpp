//
//  Pracownik.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#ifndef Pracownik_hpp
#define Pracownik_hpp
#include "Napis.hpp"
#include "Data.hpp"

class Pracownik{

public:
    const char* Imie () const;//
    const char* Nazwisko () const;//
    void Imie (const char* nowe_imie);
    void Nazwisko (const char* nowe_nazwisko);
    void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);
    void Wypisz() const;
    void Wpisz();
    int sprawdz_imie (const char* por_imie) const;
    int sprawdz_nazwisko (const char* por_nazwisko) const;
    int Porownaj(const Pracownik& wzorzec) const;
    Pracownik *m_pNastepny;
    
    

private:
    Napis m_Imie;
    Napis m_Nazwisko;
    Data m_DataUrodzenia;
    
    
    
};

#endif /* Pracownik_hpp */
