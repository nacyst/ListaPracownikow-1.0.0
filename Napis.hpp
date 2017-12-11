//
//  Napis.hpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#ifndef Napis_hpp
#define Napis_hpp

#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
class Napis{
public:
    const char* Zwroc() const;
    void Ustaw(const char* nowy_napis);
    void Wypisz()const;
    void Wpisz() ;
    int SprawdzNapis(const char*por_napis)const;
    
private:
    
    char m_pszNapis[40];
 
};



#endif /* Napis_hpp */
