#pragma once

#include <string>

/**
 * @brief Déchiffre une chaine de caractère avec une clé donnée
 *
 * @param str chaine de caractère à déchiffrer
 * @param key clé de déchiffrement
 * @return std::string résultat du déchiffrement
 */
std::string decrypt(std::string str, int key)
{
    std::string result; // Créer une variable de type string nommée result qui contiendra le résultat
    for (int i = 0; /*  */; i++) // Pour chaque caractère de la chaine de caractère
    {
        if (/* */) // Si le caractère est une minuscule
        {
            result += char(int(/* */) % /* */ + 'a'); // On ajoute le caractère décalé de key à result
        }
        else if (/* */) // Si le caractère est une majuscule
        {
            result += char(int(/* */) % /* */ + 'A'); // On ajoute le caractère décalé de key à result
        }
        else // Si le caractère n'est pas une lettre
        {
            result += str[i]; // On ajoute le caractère à result
        }
    }
    return result; // On retourne result
}