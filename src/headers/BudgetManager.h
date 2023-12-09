#ifndef BudgetManager_H
#define BudgetManager_H

#include <iostream>

//Defining Budget-Manager Class

class BudgetManager {
  double totalMonthlyBudget;
  double currentExpenses;
  double currentLeftover;

  public:
    //Constructor - Holds budget for the current month
    BudgetManager(double curMonthlyBudget) {
      totalMonthlyBudget = curMonthlyBudget;
      currentLeftover = totalMonthlyBudget;
    }

    //Destructor -- Right now, it's just a reset function
    //I'll make a proper destructor if I ever decide to allocate memory for the dang thang
    void resetBudgetManager() {
      totalMonthlyBudget = 0;
      currentExpenses = 0;
      currentLeftover = 0;

      std::cout << "Budget has been reset" << std::endl << std::endl;
    }

    void addExpense(double cost) {
      currentExpenses += cost;
      currentLeftover -= cost;
      std::cout << "Expense Added: $" << cost << std::endl;
    }

    void printCurrentBudget() {
      std::cout << currentLeftover << std::endl;
    }

    void printTotalBudget() {
      std::cout << totalMonthlyBudget << std::endl;
    }
};

#endif