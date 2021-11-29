//
// Created by Morad on 20/11/2021.
//
#include <iostream>
#include <fstream>
#include "dictionary.h"
#include "letters_set.h"

using namespace std;

int main(int argc, char * argv[])
{
    char * f1;
    char * f2;
    Dictionary diccionario;
    LettersSet cletras;

    if (argc != 3){
        cerr<<"Error. Número de argumentos incorrecto" << "\n"
            <<"Uso: programa-diccionario-letras" << endl;

        exit(-1);
    }

    f1 = argv[1];
    f2 = argv[2];

    ifstream let(f2);

    let>>cletras;

    let.close();
    ifstream dic(f1);

    dic>>diccionario;

    dic.close();

    auto iter = cletras.begin();
    auto fin = cletras.end();

    int ocurrenciasTotal = diccionario.getTotalLetters();

    cout << "Letra\tFAbs.\tFrel." << endl;

    while(iter != fin){
        char letra = tolower(iter->first);
        int ocurrenciaA = diccionario.getOcurrences(letra);
        double ocurrenciaR = (ocurrenciaA*1.0)/(ocurrenciasTotal*1.0);
        cout <<iter->first <<"\t"<< ocurrenciaA << "\t" << ocurrenciaR << "\n";

        ++iter;
    }
}
