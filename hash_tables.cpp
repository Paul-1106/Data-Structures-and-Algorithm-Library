#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>

// Pairing string and int
void hashTable1() {
    std::unordered_map<std::string, int> hashMap;
    
    hashMap["One"] = 1;
    hashMap["Two"] = 2;
    hashMap["Three"] = 3;
    hashMap["Five"] = 5;
    hashMap["Ten"] = 10;

    for (auto& au : hashMap) {
        std::cout << au.first << ", " << au.second << "\n";
    }
}

int main() {

    char option = ' ';
    int num = 0;

    while (option != 'q') {
        switch(option) {
            case 'h':
                hashTable1();
                break;
            case 'g':
                break;
            case 'b':
                break;
            case 'l':
                break;
            case 'q':
                std::cout << "Goodbye\n";
                break;
            default:
                std::cout << "This case option is not avaliable\n";
                break;
        }
    }

    return 0;
}