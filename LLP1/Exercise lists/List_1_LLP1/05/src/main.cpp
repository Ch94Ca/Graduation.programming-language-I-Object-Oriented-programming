/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/expense_control.hpp"

using namespace std;

int main(int argc, char** argv)
{
      expense_control expenses_0;

      expense paramExpense;

      paramExpense = expense("School", 200);
      expenses_0.setExpense(paramExpense, 0);

      paramExpense = expense("House rent", 900);
      expenses_0.setExpense(paramExpense, 1);

      paramExpense = expense("Water bill", 5000);
      expenses_0.setExpense(paramExpense, 5);

      cout << "Expense 0: " << endl << endl;

      cout << "Expense type: " << (expenses_0.getExpense(0)).getExpenseType() << endl;
      cout << "Expense value: " << (expenses_0.getExpense(0)).getValue() << endl << endl;

      cout << "Expense 1: " << endl << endl;

      cout << "Expense type: " << (expenses_0.getExpense(1)).getExpenseType() << endl;
      cout << "Expense value: " << (expenses_0.getExpense(1)).getValue() << endl << endl;

      cout << "Expense 5: " << endl << endl;

      cout << "Expense type: " << (expenses_0.getExpense(5)).getExpenseType() << endl;
      cout << "Expense value: " << (expenses_0.getExpense(5)).getValue() << endl << endl;

      cout << "Total Value: " << expenses_0.getTotal() << endl << endl;

      cout << "Search tests:" << endl << endl;

      cout << "Searching 'House rent': " << expenses_0.searchExpenseType("House rent") << endl;
      cout << "Searching 'School': " << expenses_0.searchExpenseType("School") << endl;
      cout << "Searching 'Water bill': " << expenses_0.searchExpenseType("Water bill") << endl;
      cout << "Searching 'College tuition': " << expenses_0.searchExpenseType("College tuition") << endl;

}  // end main
