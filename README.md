# Credit Card Validator (C++)

This is a C++ implementation of a credit card validator using Object-Oriented Programming (OOP) principles and Luhn's algorithm.

## Features

- Validates credit card numbers using the Luhn algorithm.
- Implements the solution using OOP concepts like classes, methods, and encapsulation.

## Luhn Algorithm

The Luhn algorithm is used to validate various identification numbers, especially credit card numbers. It works by performing a checksum to determine whether the card number is valid or not.

## Installation

To run the credit card validator on your local machine, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/credit-card-validator.git
   ```

2. Navigate into the project folder:
   ```bash
   cd credit-card-validator
   ```

3. Compile the program:
- Manually : 
   ```bash
   g++ .\src\ValidateCB.cpp -c -Iheader  -o obj/ValidateCB.o
   g++ .\src\main.cpp .\obj\ValidateCB.o -Iheader -o  bin/main.exe
   ```
- or just compile it using the tasks.json (Ctrl + B in VScode) :
    ```bash
    Copy the tasks.json to your .vscode folder then press Ctrl + B
    ```

4. Run the program:
   ```bash
   ./bin/main.exe
   ```

## Usage

1. Input a credit card number when prompted.
2. The program will output whether the card number is valid or invalid based on the Luhn algorithm.

## Example

```
Enter credit card number: 4532015112830366
Credit card number is valid!
```

## License

This project is licensed under the MIT License.

## Potential Evolution 

GUI version perhaps

