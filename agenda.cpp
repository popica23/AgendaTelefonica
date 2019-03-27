#include "agenda.h"

void Agenda::run(){

    //afiseaza_main_menu();
    adauga();

    while(agenda_deschisa == true){
        swtich(Meniuri){
        case MENIU_PRINCIPAL:
            break;
        case ADAUGARE_CONTACT:
            break;
        case CAUTARE_CONTACT:
            break;
        case LISTA_CONTACTE:
            break;
        }
    }
}

void Agenda::adauga(){

    std::string nume;
    std::string numar;
    std::string adresa;

    std::cout<<"Introduceti datele:\n\nNume: ";
    std::getline(std::cin,nume);
    std::cout<<"Numar: ";
    std::getline(std::cin,numar);
    std::cout<<"Adresa: ";
    std::getline(std::cin,adresa);

    abonat.set_nume(nume);
    abonat.set_numar(numar);
    abonat.set_adresa(adresa);

    lista_abonati.push_back(abonat);

}

void Agenda::actualizare_lista(){

    std::string line;
    std::string aux;

    ////////////////////////////////////
    // Sortare dupa nume
    ////////////////////////////////////

    for(unsigned int x = 0; x < lista_abonati.size() - 1; x ++){
            for(unsigned int y = 0; y < lista_abonati.size(); x++)
        if(lista_abonati[x].get_nume().substr(0,1) > lista_abonati[y].get_nume().substr(0,1)){
            aux = lista_abonati[x].get_nume();
            lista_abonati[x].get_nume() = lista_abonati[y].get_nume();
            lista_abonati[y].get_nume() = aux;

        }
    }
    sort_list.open("sort_nume.txt");
    for(unsigned int x = 0; x < lista_abonati.size(); x++){
            line = lista_abonati[x].get_nume() + "  " + lista_abonati[x].get_numar() + "  " + lista_abonati[x].get_adresa() + "  ";
            sort_list << line;
    }


    ////////////////////////////////////
    // Sortare dupa numar
    ////////////////////////////////////

    for(unsigned int x = 0; x < lista_abonati.size() - 1; x ++){
            for(unsigned int y = 0; y < lista_abonati.size(); x++)
        if(lista_abonati[x].get_numar().substr(0,1) > lista_abonati[y].get_numar().substr(0,1)){
            aux = lista_abonati[x].get_numar();
            lista_abonati[x].get_numar() = lista_abonati[y].get_numar();
            lista_abonati[y].get_numar() = aux;

        }
    }
    sort_list.open("sort_numar.txt");
    for(unsigned int x = 0; x < lista_abonati.size(); x++){
            line = lista_abonati[x].get_nume() + "  " + lista_abonati[x].get_numar() + "  " + lista_abonati[x].get_adresa() + "  ";
            sort_list << line;
    }


    ////////////////////////////////////
    // Sortare dupa adresa
    ////////////////////////////////////

    for(unsigned int x = 0; x < lista_abonati.size() - 1; x ++){
            for(unsigned int y = 0; y < lista_abonati.size(); x++)
        if(lista_abonati[x].get_adresa().substr(0,1) > lista_abonati[y].get_adresa().substr(0,1)){
            aux = lista_abonati[x].get_adresa();
            lista_abonati[x].get_adresa() = lista_abonati[y].get_adresa();
            lista_abonati[y].get_adresa() = aux;

        }
    }
    sort_list.open("sort_adresa.txt");
    for(unsigned int x = 0; x < lista_abonati.size(); x++){
            line = lista_abonati[x].get_nume() + "  " + lista_abonati[x].get_numar() + "  " + lista_abonati[x].get_adresa() + "  ";
            sort_list << line;
    }

}

void Agenda::sterge(){

}

void Agenda::afiseaza_main_menu(){

std::string afisaj = "Agenda telefonica: \n\n1>Adaugati\n2>Cautati\n3>Lista Contacte\n4>Actualizare Lista\n5>Iesiti\n\n";
std::cout<<afisaj;

}
