#include <iostream>
#include <map>
#include <string>

int main(int argc, char** argv) {
    std::map<std::string, std::u16string> zhuyinMap;

    zhuyinMap["ia"] = u"\u3127\u311A";  // ㄧㄚ
    const char* input = "ia";

    std::u16string result = zhuyinMap[input];

    // Output each UTF-16 code unit as hex
    std::cout << input << ":";
    for (char16_t c : result) {
        std::wcout << wchar_t(c);
    }
    std::cout << std::endl;

    return 0;
}

