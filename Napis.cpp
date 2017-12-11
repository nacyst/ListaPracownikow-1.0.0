//
//  Napis.cpp
//  cpp_lab3
//
//  Created by Микита Вовк on 20.11.2017.
//  Copyright © 2017 Микита Вовк. All rights reserved.
//

#include "Napis.hpp"
void Napis::Wpisz()  {
    
    
    //cout<<"Podaj napis\n";
    cin>>m_pszNapis;
    //  stdin(m_pszNapis,40);
    
};
const char* Napis::Zwroc() const{
    return m_pszNapis;
};


void Napis::Ustaw(const char* nowy_napis){
    
    strcpy(m_pszNapis,nowy_napis);
  
};
void Napis::Wypisz()const{
    cout<<m_pszNapis;
    
};


int Napis::SprawdzNapis(const char*por_napis)const{
    
    
    
    return strcmp(m_pszNapis, por_napis);
    /*
    int i=0;
    while((por_napis[i]!='\0')||(m_pszNapis[i]!='\0')){
        if (por_napis[i]>m_pszNapis[i])
            return -1;
        if (por_napis[i]<m_pszNapis[i])
            return 1;
        
        i++;
    }
    
    return 0;
    */
};
