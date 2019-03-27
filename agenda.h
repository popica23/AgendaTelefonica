// Definim fisierul
#ifndef AGENDA_H
#define AGENDA_H

// Includem functii primitive
#include <iostream>
#include <vector>
#include <fstream>

// Includem clasele pe care le utilizam
#include "abonat.h"

class Agenda{

private:
    // Conditia de inchidere a programului
    bool agenda_deschisa = true;

    // Valoare cu care navigam in aplicatie (este string deoarece daca utilizatorul introduce o litera si avem int o sa moara tot programul :<)
    std::string input;
    std::ofstream sort_list;

    int numar_abonati;

    // Definim obiectul Abonat pentru a putea lucra cu el
    Abonat abonat;

    // Lista de abonati
    std::vector<Abonat> lista_abonati;

public:
    // Cheeky feature
    void run();

    // Functiile de baza
    void adauga();
    void sterge();

    // Functiile cheeky
    void afiseaza_numar();
    void afiseaza_contact();
    void afiseaza_lista_contacte();

    // Esthetics
    void afiseaza_main_menu();

    // Functii sortare
    void actualizare_lista();

    // Initializam lista in cazul in care redeschidem programul si avem deja contacte adaugate
    void init();

    // Lista de meniuri
    enum Meniuri{
        MENIU_PRINCIPAL = 0,
        ADAUGARE_CONTACT = 1,
        CAUTARE_CONTACT = 2,
        LISTA_CONTACTE = 3
    };

};

#endif // AGENDA_H
