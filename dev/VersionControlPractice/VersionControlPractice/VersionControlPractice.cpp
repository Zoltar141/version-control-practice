#include <iostream>
#include "Crypt.h" // include the class 

int main()
{
    int choice;
    do
    {
        std::cout << "1. Enter the Crypt\n";
        std::cout << "2. Flee\n";
        std::cout << "\nChoose an option: ";

        std::cin >> choice;

        if (choice == 1)
        {
            Crypt crypt; // create the obj
            crypt.DisplayMessage(); // display the message
        }
        else if (choice == 2)
        {
            std::cout << "You flee from the crypt.\n";
        }
        else
        {
            std::cout << "Invalid selection.\n";
        }

    } while (choice != 2);

    return 0;
}