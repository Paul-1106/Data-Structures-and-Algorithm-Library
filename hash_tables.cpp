#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>


void hashTable1() {

    // Pairing string and int
    std::unordered_map<std::string, int> hashMap;
    
    hashMap["One"] = 1;
    hashMap["Two"] = 2;
    hashMap["Three"] = 3;
    hashMap["Five"] = 5;
    hashMap["Ten"] = 10;

    for (auto& au : hashMap) {
        std::cout << au.first << ", " << au.second << "\n";
    }

    // Amount of zeros
    std::unordered_map<int, int> hashMap2;
    int freq = 0;

    hashMap2[1] = 10;
    hashMap2[2] = 0;
    hashMap2[3] = 20;
    hashMap2[4] = 50;
    hashMap2[5] = 0;
    hashMap2[6] = 0;

    for (auto& au : hashMap2) {
        if (au.second == 0) {
            freq += 1;
        }
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