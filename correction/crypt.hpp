#pragma once

#include <string>

std::string crypt(std::string str, int key);

std::string crypt(std::string str, int key) {
    std::string result; // Créer une variable de type string nommée result qui contiendra le résultat
    for (int i = 0; i < str.length(); i++) // Pour chaque caractère de la chaine de caractère
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Si le caractère est une minuscule
        {
            result += char(int(str[i] + key - 'a') % 26 + 'a'); // On ajoute le caractère décalé de key à result
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') // Si le caractère est une majuscule
        {
            result += char(int(str[i] + key - 'A') % 26 + 'A'); // On ajoute le caractère décalé de key à result
        }
        else // Si le caractère n'est pas une lettre
        {
            result += str[i]; // On ajoute le caractère à result
        }
    }
    return result; // On retourne result
}
