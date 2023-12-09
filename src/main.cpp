#include <iostream>
#include <string>
#include "./headers/BudgetManager.h"

using namespace std;

void inputMenu()
{
  cout << "=== Budget Management ===" << endl;
  cout << "===  1. Add Expense   ===" << endl;
  cout << "===  2. Check Budget  ===" << endl;
  cout << "===  3. Check Total   ===" << endl;
  cout << "===  4. Clear Budget  ===" << endl;
  cout << "===  5. Exit App      ===" << endl;
  cout << "Enter an option" << endl
       << endl;
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    cout << "To run this code, please do ./main <Budget>" << endl;
    return 0;
  }

  // Create a budgetManager class, convert string in argument line to a double.
  double budget = stod(argv[1]);

  BudgetManager myBudget(budget);
  int choice;

  while (1)
  {
    inputMenu();

    cin >> choice;

    switch (choice)
    {
    case 1:
      double amount;

      cout << "Enter the expense amount" << endl;
      cin >> amount;

      myBudget.addExpense(amount);
      break;
    case 2:
      myBudget.printCurrentBudget();
      break;

    case 3:
      myBudget.printTotalBudget();
      break;

    case 4:
      myBudget.resetBudgetManager();
      break;

    case 5:
      cout << "Exit Successful" << endl;
      return 1;

    default:
      cout << "Input not valid, please try again" << endl;
      break;
    }
  }
}
