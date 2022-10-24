#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
  char op;
  float n1, n2;
  cout << "\n";
  cout << "\n";
  cout << "--------------------------------------------";
  cout << "\n";
  cout << "                 Calculator           ";
  cout << "\n";
  cout << "--------------------------------------------";
  cout << "\n \n";
  cout << "Select An Operator +, -, *, /: ";
  cin >> op;
  cout << "\n";
  cout << "Enter The First Number/Operand: ";
  cin >> n1;
  cout << "\n";
  cout << "Enter The Second Number/Operand: ";
  cin >> n2;
  cout << "\n";
  switch (op) 
  { 
    case '+':
      cout << n1 << "+" << n2 << "=" << n1+n2;
      break;
    case '-':
      cout << n1 << "-" << n2 << "=" << n1-n2;
      break;
    case '*':
      cout << n1 << "×" << n2 << "=" << n1*n2;
      break;
    case '/':
      cout << n1 << "÷" << n2 << "=" << n1/n2;
      break;
    default:
      cout << "Operator is wrong or doesn't exist";
      break;
    }
  cout << "\n \n";
  cout << "--------------------------------------------";
  cout << "\n";
  cout << "           Thank You For Trying Me!           ";
  cout << "\n";
  cout << "--------------------------------------------";    
  return 1;
}
