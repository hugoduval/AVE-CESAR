#include "crypt.hpp"
#include "decrypt.hpp"
#include <iostream>

int main(void)
{
    std::string str = /* écrire entre "" la phrase que vous voulez crypter et décrypter */;

    int key = /* écrire un nombre qui sera la clé de cryptage/décryptage du programme */;

    std::string crypt_str = /* appeler la fonction de cryptage en lui envoyant notre str et notre key */;

    std::string decrypt_str = /* appeler la fonction de cryptage en lui envoyant notre phrase cryptée et notre key */;

    std::cout << "La phrase cryptée est : " << crypt_str << std::endl;
    std::cout << "La phrase décryptée est : " << decrypt_str << std::endl;
    return 0;
}