//
// Created by Morad on 03/11/2021.
//

#include <iostream>
#include <fstream>
#include "letters_set.h"

using namespace std;

int main (int argc, char * argv[])
{
    string word;
    char * fichero;

    LettersSet l;

    if (argc != 3){
        cerr << "Error. Número de argumentos incorrectos" << "\n"
            << "Uso: Nombre-pathfichero-palabra" << "\n";
        exit(-1);
    }

    fichero = argv[1];
    word = argv[2];

    ifstream f(fichero);

    f>>l;

    int score = l.getScore(word);

    cout <<  score << endl;

    return 0;

}


