/*
        Cases
        - camelCase
                - camelLongerNameCase
        - snake_Camel_Case
        - PascalCase
                - PascalLongerNameCase
        - Snake_Pascal_Case
        - snake_lower_case
        - SNAKE_SCREAMING_CASE

        1. Naming Convention
                variable - camelCase (-10%)
                constant - SNAKE_SCREAMING_CASE (-10%)
                function - PascalCase (-10%)
        2. Naming should make sense & Use only global abbreviation (-10%)
        3. Code Construction (-2%)
                {
                        constant variable
                        variable

                        code block
                }
        4. Refrain using Global Variable (automatic 0)
*/

#include <iomanip>
#include <iostream>

using namespace std;

// Define macros for platform-specific console clearing and pausing
#ifdef _WIN32
#define CLEAR_CONSOLE system("cls");
#else
#define CLEAR_CONSOLE system("clear");
#endif

#ifdef _WIN32
#define PAUSE_CONSOLE system("pause");
#else
#define PAUSE_CONSOLE ;
#endif

// Buying and Payment of Products of Andoks
// Categories: Meal, Appetizers & Drinks

int main() {
  std::string name, ordersList = "";
  int mealChoice, appetizerChoice, drinkChoice;
  float totalOfItemsBought = 0.0;

  std::cout << "Name: ";
  std::cin >> name;

  CLEAR_CONSOLE;

  std::cout << "--- Menu ---\n"
            << std::left << std::setw(30) << "1. Dokito Chicken" << std::right
            << std::setw(10) << "P 110\n"
            << std::left << std::setw(30) << "2. Liempo" << std::right
            << std::setw(10) << "P 180\n"
            << std::left << std::setw(30) << "3. Litson Baka" << std::right
            << std::setw(10) << "P 220\n"
            << std::left << std::setw(30) << "0. None\n"
            << ":: ";
  std::cin >> mealChoice;

  CLEAR_CONSOLE;

  std::cout << "--- Menu ---\n"
            << std::left << std::setw(30) << "1. Halo Halo" << std::right
            << std::setw(10) << "P 80\n"
            << std::left << std::setw(30) << "2. Mais Con Yelo" << std::right
            << std::setw(10) << "P 90\n"
            << std::left << std::setw(30) << "3. Letch Flan" << std::right
            << std::setw(10) << "P 70\n"
            << std::left << std::setw(30) << "0. None\n"
            << ":: ";
  std::cin >> appetizerChoice;

  CLEAR_CONSOLE;

  std::cout << "--- Menu ---\n"
            << std::left << std::setw(30) << "1. Softdrinks" << std::right
            << std::setw(10) << "P 30\n"
            << std::left << std::setw(30) << "2. Pineapple Juice" << std::right
            << std::setw(10) << "P 80\n"
            << std::left << std::setw(30) << "3. Wine" << std::right
            << std::setw(10) << "P 100\n"
            << std::left << std::setw(30) << "0. None\n"
            << ":: ";
  std::cin >> drinkChoice;

  CLEAR_CONSOLE;

  switch (mealChoice) {
  case 1:
    totalOfItemsBought += 110;
    ordersList += "Dokito Chicken\n";
    break;
  case 2:
    totalOfItemsBought += 180;
    ordersList += "Liempo\n";
    break;
  case 3:
    totalOfItemsBought += 220;
    ordersList += "Litson Baka\n";
    break;
  case 0:
    ordersList += "No Meal Choice\n";
    break;
  default:
    ordersList += "Invalid Meal Choice\n";
    break;
  }

  switch (appetizerChoice) {
  case 1:
    totalOfItemsBought += 80;
    ordersList += "Halo Halo\n";
    break;
  case 2:
    totalOfItemsBought += 90;
    ordersList += "Mais Con Yelo\n";
    break;
  case 3:
    totalOfItemsBought += 70;
    ordersList += "Letch Flan\n";
    break;
  case 0:
    ordersList += "No Appetizer Choice\n";
    break;
  default:
    ordersList += "Invalid Appetizer choice\n";
    break;
  }

  switch (drinkChoice) {
  case 1:
    totalOfItemsBought += 30;
    ordersList += "Softdrinks\n";
    break;
  case 2:
    totalOfItemsBought += 80;
    ordersList += "Pineapple\n";
    break;
  case 3:
    totalOfItemsBought += 100;
    ordersList += "Wine\n";
    break;
  case 0:
    ordersList += "No Meal Choice\n";
    break;
  default:
    ordersList += "Invalid meal choice\n";
    break;
  }

  std::cout << "Hi! " << name << std::endl
            << "Your orders are:\n"
            << ordersList << "Your Total: " << totalOfItemsBought << std::endl;

  PAUSE_CONSOLE;
  return 0;
}
