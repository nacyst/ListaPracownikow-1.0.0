//
//  Data.cpp
//  cpp_lab3
//
//  Created by Микита Вовк on 22.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#include "Data.hpp"
Data::Data() {
    m_nDzien = 1;
    m_nMiesiac = 1;
    m_nRok = 2000;
};


Data::~Data()
{
}

void Data::Ustaw(int d, int m, int r) {
    m_nDzien = d;
    m_nMiesiac = m;
    m_nRok = r;
    Koryguj();
};
int Data::Dzien() const {
    return m_nDzien;
};

int Data::Miesiac() const{
    return m_nMiesiac;
};


void Data::Wypisz() const {
    cout << m_nDzien << "-" << m_nMiesiac << "-" << m_nRok << endl;
};

void Data::Wpisz() {
    cout << "Podaj dzien\n";
    cin >> m_nDzien;
    cout << "Podaj miesiac\n";
    cin >> m_nMiesiac;
    cout << "Podaj rok\n";
    cin >> m_nRok;
    Koryguj();
};

void Data::Koryguj() {
    if (m_nDzien < 1)
        m_nDzien = 1;
    
    if (m_nDzien > 31)
        m_nDzien = 31;
    
    if (m_nMiesiac < 1)
        m_nMiesiac = 1;
    
    if (m_nMiesiac > 12)
        m_nMiesiac = 12;
    
    if (m_nRok < 1)
        m_nRok = 1;
    
    //:4 -:100 :400
    if (m_nMiesiac == 2) {
        if (((m_nRok % 4) == 0) && ((m_nRok % 100) != 0) && ((m_nRok % 400) == 0)) {
            if (m_nDzien > 29)
                m_nDzien = 29;
        }
        else
            if (m_nDzien > 28)
                m_nDzien = 28;
        
    }
    
    if (((m_nMiesiac % 2) == 0)&& (m_nMiesiac!=8)){
        if (m_nDzien > 30)
            m_nDzien = 30;
    }
    
};

int Data::Porownaj(const Data &wzor) const {
    if (wzor.m_nRok == m_nRok) {
        if (wzor.m_nMiesiac == m_nMiesiac) {
            if (wzor.m_nDzien == m_nDzien){
                return 0;
            }
            if (wzor.m_nDzien > m_nDzien)
                return -1;
            if (wzor.m_nDzien < m_nDzien)
                return 1;
            
        }
        
        if (wzor.m_nMiesiac > m_nMiesiac)
            return -1;
        
        if (wzor.m_nMiesiac < m_nMiesiac)
            return 1;
    }
    if (wzor.m_nRok > m_nRok)
        return -1;
    
   // if (wzor.m_nRok < m_nRok)
        return 1;
    
    
   
};
