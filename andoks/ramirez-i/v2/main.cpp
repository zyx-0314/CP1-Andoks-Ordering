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

std::string SetName();
void SetMealChoice(int &mealChoice);
void SetAppetizerChoice(int &appetizerChoice);
void SetDrinkChoice(int &drinkChoice);
void SetClosing(int &closingChoice);

void ComputesMealChoice(int mealChoice, float &totalOfItemsBought,
                        std::string &ordersList);
void ComputesAppetizerChoice(int appetizerChoice, float &totalOfItemsBought,
                             std::string &ordersList);
void ComputesDrinkChoice(int drinkChoice, float &totalOfItemsBought,
                         std::string &ordersList);

void DisplayReceipt(std::string name, std::string ordersList,
                    float totalOfItemsBought);

int main() {
  std::string name, ordersList = "";
  int mealChoice, appetizerChoice, drinkChoice, closingChoice = 0;
  float totalOfItemsBought = 0.0;

  do {
    SetName();
    SetMealChoice(mealChoice);
    SetAppetizerChoice(appetizerChoice);
    SetDrinkChoice(drinkChoice);

    ComputesMealChoice(mealChoice, totalOfItemsBought, ordersList);
    ComputesAppetizerChoice(appetizerChoice, totalOfItemsBought, ordersList);
    ComputesDrinkChoice(drinkChoice, totalOfItemsBought, ordersList);

    DisplayReceipt(name, ordersList, totalOfItemsBought);

    SetClosing(closingChoice);

    if (closingChoice) {
      return 0;
    }

    totalOfItemsBought = 0;
    ordersList = "";
    name = "";

    CLEAR_CONSOLE;

  } while (true);
}

std::string SetName() {
  std::string name;

  std::cout << "Name: ";
  std::cin >> name;

  CLEAR_CONSOLE;

  return name;
}

void SetMealChoice(int &mealChoice) {
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
}

void SetAppetizerChoice(int &appetizerChoice) {
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
}

void SetDrinkChoice(int &drinkChoice) {
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
}

void ComputesMealChoice(int mealChoice, float &totalOfItemsBought,
                        std::string &ordersList) {
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
}

void ComputesAppetizerChoice(int appetizerChoice, float &totalOfItemsBought,
                             std::string &ordersList) {
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
}

void ComputesDrinkChoice(int drinkChoice, float &totalOfItemsBought,
                         std::string &ordersList) {
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
}

void DisplayReceipt(std::string name, std::string ordersList,
                    float totalOfItemsBought) {
  std::cout << "Hi! " << name << std::endl
            << "Your orders are:\n"
            << ordersList << "Your Total: " << totalOfItemsBought << std::endl;

  PAUSE_CONSOLE;
  CLEAR_CONSOLE;
}

void SetClosing(int &closingChoice) {
  std::cout << "Is Store Closing [1 = yes | 0 = no]: ";
  std::cin >> closingChoice;
}

// Create 3 versions as I demo of the problem below
// Car Cleaning Service: External Cleaning, Internal Cleaning and Car Check up
// Provide atleast 3 options for your customer to choose from each categories
