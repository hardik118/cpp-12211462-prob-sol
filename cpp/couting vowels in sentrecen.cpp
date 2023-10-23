
#include <iostream>
#include <cstring>

#include <cctype> // For isalpha and tolower



int countVowels(const char *sentence) {

    int count = 0;

    const char *vowels = "AEIOUaeiou"; // Vowel characters



    while (*sentence) {

        const char *v = vowels; // Pointer to the vowel characters

        while (*v) {

            if (std::tolower(*sentence) == *v) {

                count++;

                break;

            }

            v++;

        }

        sentence++;

    }



    return count;

}

int main() {

    char sentence[1000];

    std::cin.getline(sentence, sizeof(sentence));



    int vowelCount = countVowels(sentence);

    std::cout << vowelCount << std::endl;



    return 0;

}


