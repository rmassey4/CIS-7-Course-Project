#include <iostream>
#include <string>

int main() {
  int chosen_number;
  std::string message;
  std::string keyword;
  std::string encrypted_message;
  std::string decrpyted_message;

do {
        std::cout << "Welcome to the Encryption/Decryption progam!\n Please enter the number of the choice you would like.\n";
        std::cout << "1. Encryption.\n";
        std::cout << "2. Decryption.\n";
        std::cout << "3. Exit the program.\n";
        std::cin >> chosen_number;

        if (chosen_number >= 1 && chosen_number <= 3) {
            switch (chosen_number) {
                case 1:
                    std::cout << "Please enter the message you would like to encrypt.\n";
                    std::cin >> message;
                    break;
                case 2:
                    std::cout << "Please enter the message you would like to decrypt.\n";
                    std::cin >> message;
                    break;
                case 3:
                  std::cout << "Goodbye,thank you for using the Encryption/Decryption program!\n";
                    break;
            }
        } 
        else {
            std::cout << "Please try again, entering a number between 1-3.\n";
        }
    }
    while (chosen_number != 3);

    return 0;
}
