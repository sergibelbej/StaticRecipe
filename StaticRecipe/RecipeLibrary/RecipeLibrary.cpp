#include "RecipeLibrary.h"
#include <vector>
#include <string>
#include <iostream>
#include <cctype>

namespace RecipeLibrary
{

	void Grocery::addGrocery(std::vector<std::string>& groceries)
	{
		std::string newItem;
		do {
			bool isNumber = false;
			bool isDuplicate = false;
			std::cout << "Enter a new grocery --> ";
			std::cin >> newItem;

			if (newItem == "0") {
				return;
			}

			for (size_t i = 0; i < newItem.length(); i++) {
				if (isdigit(newItem[i])) {
					int randNum = rand() % (7 - 1 + 1) + 1;
					isNumber = true;

					switch (randNum)
					{
					case 1:
						std::cout << "Groceries shouldn't have numbers in them... ya think?" << std::endl;
						break;
					case 2:
						std::cout << "Are you gonna buy numbers? Try again." << std::endl;
						break;
					case 3:
						std::cout << "You must really love numbers... You even eat 'em for supper! " << std::endl;
						break;
					case 4:
						std::cout << "No numbers here... Maybe algebra - Aren't they letters anyway?" << std::endl;
						break;
					case 5:
						std::cout << "Stop fooling 'round! You are NOT gonna buy numbers, you prick..." << std::endl;
						break;
					case 6:
						std::cout << "CRY ME A RIVER MATE, YOU ARE NOT BUYING NUMBERS. NOT. ONCE. IN. A. LIFETIME." << std::endl;
						break;
					case 7:
						std::cout << "Hate to break it to ya... But, no numbers are allowed here mate." << std::endl;
						break;
					default:
						std::cout << "NEIN... DU BIST EIN DUMMKOPF...!!" << std::endl;
						break;
					}
					break;
				}
			}

			if (!isNumber) { // Check if it's not a number
				newItem[0] = toupper(newItem[0]);

				// Check if the item is already in the list
				for (const auto& item : groceries) {
					if (item == newItem) {
						isDuplicate = true;
						std::cout << "Item already exists in the list." << std::endl;
						break;
					}
				}

				// If it's not a duplicate, add it to the list
				if (!isDuplicate) {
					groceries.push_back(newItem);
				}
			}

		} while (newItem != "0");
	}




	

	std::string Grocery::viewGrocery(std::vector<std::string>& groceries, std::string& result) {
		result = "";
		if (groceries.empty()) {
			std::cout << "The list is empty! ";
		}

		else {
			std::cout << "Your shopping list contains: ";
			for (size_t i = 0; i < groceries.size(); ++i) {
				if (i == groceries.size() - 1) {
					result += groceries[i];
				}
				else {
					result += groceries[i] + ", ";
				}

			}
			std::cout << result << std::endl;

		}
		return result;

	}

	std::string Grocery::removeGrocery(std::vector<std::string>& groceries)
	{
		std::string groceryToRemove;

		std::cout << "Grocery to remove --> ";
		std::cin >> groceryToRemove;

		if (!groceryToRemove.empty()) {
			groceryToRemove[0] = std::toupper(groceryToRemove[0]);
		}

		// Iterate over the vector in reverse order
		for (int i = groceries.size() - 1; i >= 0; i--) {
			if (groceries.at(i) == groceryToRemove) {
				groceries.erase(groceries.begin() + i);
			}
		}
		return groceryToRemove;
	}




	/*void Grocery::recipesCheck(std::vector<std::string>& groceries) {
		std::string avocadoChickenSandwich[6] = { "Avocado", "Olive oil", "Bread", "Salt", "Chicken", "Mayonnaise" };
		std::string salmonSushi[3] = { "Seaweed", "Salmon", "Rice" };
		bool matched = false;
		for (size_t y = 0; y < groceries.size(); y++) {
			for (size_t i = 0; i < groceries.size(); i++) {

				if (groceries.at(i) == avocadoChickenSandwich[y]) {
					std::cout << "ole";

				}
			}
		}

			if (matched = true) {

				
			}
			if (matched = false) {
				std::cout << "No current recipes match your ingredients!";

			}

	 }*/
}