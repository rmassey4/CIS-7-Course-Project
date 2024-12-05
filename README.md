## Creator Information
Created by: Reuben Massey and Trinie Ngo  
Date published: December 5th, 2024

## Description and Programming Approaches
- The program uses a Vigenère cipher algorithm, a polyalphabetic substitution cipher that uses a keyword in order to encrypt/shift letters by a certain amount.
- The program uses the encrypted_message and decrypted_message functions using the modulus operator for encryption/shifting characters.
- The program prompts the user 3 options to select from encryption, decryption, or to exit the program.
- If the user chooses to encrypt or decrypt a message, the program will ask for a keyword in order to shift the letters of the message according to the letters in the keyword.
- There is basic checks for valid menu selection to ensure proper program functionality within the appropriate options.
- The program will only encrypt/decrypt lowercase alphabetic characters (a-z).
- Non-alphabetic characters like numbers or special symbols will remain unchanged during encryption/decryption.
- The program does not process spaces between the message, therefore messages will be to be input as a single string.

## Program Instructions
- Compile and Run the program.
- Choose option 1 for encryption, 2 for decryption, and 3 to exit the program.
  - Encryption
    - Enter the text to be encrypted in lowercase alphabetical letters, do not include spaces.
    - Provide a keyword for encryption, keeping the keyword in lowercase alphabetical letters, do not include spaces.
    - Use the encrypted message.
  - Decryption
    - Enter the text to be decrypted, do not include spaces in the text.
    - Provide the same keyword used in encryption.
    - Use the decrypted message.
  - Exit
    - Terminates the program.
