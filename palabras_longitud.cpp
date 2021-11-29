//
// Created by Morad on 20/11/2021.
//
#include <iostream>
#include <fstream>
#include "dictionary.h"

using namespace std;

int main(int argc, char * argv[])
{
    char * fichero;
    int longitud;
    Dictionary diccionario;

    if(argc != 3){
        cerr<<"Error.Número de argumentos incorrecto" << "\n"
            <<"Uso: nombre-fichero-longitud" << endl;

        exit(-1);
    }

    fichero = argv[1];
    longitud = atoi(argv[2]);

    ifstream f(fichero);

    f >> diccionario;

    f.close();

    vector <string> v;

    v = diccionario.wordsOfLength(longitud);

    cout << "Palabras de longitud " << longitud << endl;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

}

