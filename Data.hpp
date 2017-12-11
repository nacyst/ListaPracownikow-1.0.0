//
//  Data.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 22.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#ifndef Data_hpp
#define Data_hpp

#include<iostream>
using namespace std;
class Data
{
public:
    Data();
    void Ustaw(int d, int m, int r);
    int Dzien() const;
    int Miesiac() const;
    int Rok() const;
    void Wypisz() const;
    void Wpisz();
    int Porownaj(const Data &wzor) const;
    
    
    ~Data();
private:
    void Koryguj();
    int m_nDzien;
    int m_nMiesiac;
    int m_nRok;
    
};


#endif /* Data_hpp */
