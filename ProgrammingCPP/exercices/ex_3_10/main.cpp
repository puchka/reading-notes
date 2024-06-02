#include "../../std_lib_facilities.h"

int main()
{
  string operation;
  double operand1, operand2;
  cout << ">> ";
  cin >> operation >> operand1 >> operand2;
  if (operation == "+")
    cout << operand1 + operand2;
  else if (operation == "plus")
    cout << operand1 + operand2;
  else if (operation == "-")
    cout << operand1 - operand2;
  else if (operation == "minus")
    cout << operand1 - operand2;
  else if (operation == "*")
    cout << operand1 * operand2;
  else if (operation == "mul")
    cout << operand1 * operand2;
  else if (operation == "/")
    cout << operand1 / operand2;
  else if (operation == "div")
    cout << operand1 / operand2;
  else
    cout << "Unknown operation " << operation;
  cout << endl;
}
