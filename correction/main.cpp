#include "crypt.hpp"
#include "decrypt.hpp"
#include <iostream>

int main(void)
{
    std::string str = "Hello World !";
    int key = 3;
    std::string crypt_str = crypt(str, key);
    std::string decrypt_str = decrypt(crypt_str, key);
    std::cout << "La phrase cryptée est : " << crypt_str << std::endl;
    std::cout << "La phrase décryptée est : " << decrypt_str << std::endl;
    return 0;
}