//CIS-7 Final Project: Vigenere Cipher Decryption
//By: Reuben Massey and Trinie Ngo
//Date: December 2, 2024
//Due: December 8, 2024

#include <iostream>
#include <string>
#include <algorithm>
//function for vigenere cipher encryption
std::string encrypted_message (std::string text, std::string keyword){
    std::string encrypted_text = "";
    int keyword_index = 0;
    for (int i = 0; i < text.length(); i++){
        if(isalpha(text[i])){
            char encrypted_char = 'a' + ((text[i] - 'a' + keyword[keyword_index] - 'a') % 26);
            encrypted_text += encrypted_char;
            keyword_index++;
        }
        else {
            encrypted_text += text[i];
        }
    }
    return encrypted_text;
}

//function for vigenere cipher decryption
std::string decrypted_message(std::string text2, std::string keyword){
    std::string decrypted_text = "";
    int keyword_index = 0;
    for (int i = 0; i < text2.length(); i++){
        if(isalpha(text2[i])){
            char decrypted_char = 'a' + ((text2[i] - 'a' - (keyword[keyword_index] - 'a') + 26) % 26);
            decrypted_text += decrypted_char;
            keyword_index++;
        }
        else {
            decrypted_text += text2[i];
        }
    }
    return decrypted_text;
}


//main driver program
int main() {
  int chosen_number;    //declaring variables
  std::string message, keyword;

    do {
        //main menu for user
        std::cout << "Welcome to the Encryption/Decryption progam!\n Please enter the number of the choice you would like.\n";
        std::cout << "1. Encryption.\n";
        std::cout << "2. Decryption.\n";
        std::cout << "3. Exit the program.\n";
        std::cin >> chosen_number;    //input choice

        if (chosen_number >= 1 && chosen_number <= 3) {
            switch (chosen_number) {
                case 1:        //encrypt message
                    {
                    std::cout << "Please enter the message you would like to encrypt.\n";
                    std::cin >> message;
                    std::cout << "Please enter the key/keyword.\n";
                    std::cin >> keyword;
                    std::string encrypted_text = encrypted_message(message, keyword);
                    std::cout << "Encrypted message: " << encrypted_text << std::endl;
                    break;
                    }
                case 2:        //decrypt message
                    {
                    std::cout << "Please enter the message you would like to decrypt.\n";
                    std::cin >> message;
                    std::cout << "Please enter the key/keyword.\n";
                    std::cin >> keyword;
                    std::string decrypted_text = decrypted_message(message, keyword);
                    std::cout << "Decrypted message: " << decrypted_text << std::endl;
                    break;
                    }
                
                case 3:        //exit the program
                    {
                  std::cout << "Goodbye, thank you for using the Encryption/Decryption program!\n";
                    break;
                    }
            }
        } 
        else {                //exception handling for numbers outside 1-3
            std::cout << "Please try again, try entering a number between 1-3.\n";
        }
    }
    while (chosen_number != 3);

    return 0;
}
