//
// Created by Morad on 16/11/2021.
//

#include <iostream>
#include "letters_bag.h"
#include "letters_set.h"
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    char * fichero;

    LettersSet cl;

    fichero = argv[1];
    ifstream f(fichero);

    f>>cl;

    f.close();

    LettersBag cb(cl);

    int size = cb.size();

    for (int i = 0; i < size; i++)
        cout << cb.extractLetter() << endl;

}


