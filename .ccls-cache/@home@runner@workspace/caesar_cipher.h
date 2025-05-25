#pragma once
#include <string>

namespace Caesar {

    std::string inputText();
    std::string caesarEncrypt(const std::string& text, int shift);
    void outputText(const std::string& encryptedText);

}
