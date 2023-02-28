#pragma once

#include <string>

std::string crypt(std::string str, int key) {
    std::string resultat = "";
    for (int i = 0; i < str.length(); i++) {
        char caractere = str[i];
        if (isalpha(caractere)) {
            char minuscule = tolower(caractere);
            char decale = ((minuscule - 'a') + key) % 26 + 'a';
            if (isupper(caractere)) {
                decale = toupper(decale);
            }
            resultat += decale;
        } else {
            resultat += caractere;
        }
    }
    return resultat;
}
