# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;


  cout << "Enter first number: ";
  cin >> num1 ; 
  cout << "Enter second number: ";
  cin >> num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;


  switch(op) {

    case '+':
      cout<<"Sum-->" << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout<<"Difference-->" << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout<<"Product-->" << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout <<"Division-->"<< num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
















