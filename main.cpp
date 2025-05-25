
#include <iostream>
#include "caesar_cipher.h"

int main() {
    try {
        std::string text = Caesar::inputText();

        int shift = 0;
        std::cout << "Введіть значення зсуву (ціле число): ";
        std::cin >> shift;


        std::string encrypted = Caesar::caesarEncrypt(text, shift);
        Caesar::outputText(encrypted);
    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}








