// Definim fisierul
#ifndef ABONAT_H
#define ABONAT_H

#include <iostream>
#include <string>

class Abonat{

private:
    std::string nume;
    std::string numar_telefon;
    std::string adresa;
public:


    //Aici adaugam datele abonatului
    void set_nume(std::string);
    void set_numar(std::string);
    void set_adresa(std::string);

    //Aici avem functiile din care luam valorile introduse
    std::string get_nume(){return nume;}
    std::string get_numar(){return numar_telefon;}
    std::string get_adresa(){return adresa;}


};

#endif // ABONAT_H
