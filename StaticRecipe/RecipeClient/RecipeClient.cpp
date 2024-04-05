#include <iostream>
#include <vector>
#include <string>
#include "RecipeLibrary.h"

int main()
{
    std::string command;
    std::string result;
    std::vector<std::string> groceries = {};


    do {
        std::cout << std::endl;
        std::cout << " ==| SHOPPING LIST ORGANIZER |==" << std::endl;
        std::cout << "1- Enter a new grocery to the list." << std::endl;
        std::cout << "2- View the current list" << std::endl;
        std::cout << "3- Remove a grocery from the list." << std::endl;
       /* std::cout << "4- View possible recipes" << std::endl;*/
        std::cout << "0- Exit" << std::endl;
        std::cin >> command;
        system("cls");


        if (command == "1") {
            std::cout << "  == ITEM LIST ADDER == \n (To exit, type 0)" << std::endl;
            std::cout << std::endl;
            RecipeLibrary::Grocery::addGrocery(groceries);
        }

        if (command == "2") {
            RecipeLibrary::Grocery::viewGrocery(groceries, result);
        }

        if (command == "3") {
            RecipeLibrary::Grocery::removeGrocery(groceries);
        }
        //RecipeLibrary::Grocery::Divide(groceries);

        /*if (command == "4") {
            //check si tiene algun ingrediente de la receta.
            RecipeLibrary::Grocery::recipesCheck(groceries);

        }*/

    } while (command != "0");
}