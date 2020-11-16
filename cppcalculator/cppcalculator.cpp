// cppcalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int num1, int num2) {
    std::cout << "Answer: ";
    return num1 + num2;
}

int sub(int num1, int num2) {
    std::cout << "Answer: ";
    return num1 - num2;
}

int divi(int num1, int num2) {
    std::cout << "Answer: ";
    return num1 / num2;
}

int mul(int num1, int num2) {
    std::cout << "Answer: ";
    return num1 * num2;
}

int main()
{
    while(true){
        system("cls");
        std::cout << "**************\n";
        std::cout << "C++ Calculator\n";
        std::cout << "**************\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Divide\n";
        std::cout << "4. Multiply\n";
        std::cout << "5. Exit\n";
        std::cout << "Please select an option by typing in the corresponding number; 1 for Add\n";

        int userkey;
        std::cin >> userkey;

        if (userkey == 1) {
            int num1, num2;
            std::cout << "Enter two numbers:\n";
            std::cin >> num1;
            std::cin >> num2;
            std::cout << add(num1, num2);
            system("pause");
        }

        else if (userkey == 2) {
            int num1, num2;
            std::cout << "Enter two numbers:\n";
            std::cin >> num1;
            std::cin >> num2;
            std::cout << sub(num1, num2);
            system("pause");
        }

        else if (userkey == 3) {
            int num1, num2;
            std::cout << "Enter two numbers:\n";
            std::cin >> num1;
            std::cin >> num2;
            std::cout << divi(num1, num2);
            system("pause");
        }

        else if (userkey == 4) {
            int num1, num2;
            std::cout << "Enter two numbers:\n";
            std::cin >> num1;
            std::cin >> num2;
            std::cout << mul(num1, num2);
            system("pause");
        }

        else if (userkey == 5) {
            std::cout << "Goodbye";
            system("pause");
            break;
        }

        else {
            std::cout << "Invalid";
        }
    }
}
