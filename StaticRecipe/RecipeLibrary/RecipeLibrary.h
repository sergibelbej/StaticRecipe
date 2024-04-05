// Name the functions here.
#pragma once

#include <vector>
#include <string>
#include <iostream>

namespace RecipeLibrary
{
    class Grocery
    {
    public:
        static void addGrocery(std::vector<std::string>& groceries);


        static std::string viewGrocery(std::vector<std::string>& groceries, std::string& result);
        //Returns result, a string with all the groceries from the vector.

        static std::string removeGrocery(std::vector<std::string>& groceries);


        /*static void recipesCheck(std::vector<std::string>& groceries);*/
    };
}