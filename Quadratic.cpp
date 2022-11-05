#include <iostream>
#include <cmath>

int main() {
  // Declare needed variables
  double a;
  double b;
  double c;
  // Allow user to input value of a, b, c
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  //Declare root variables
  double root1;
  double root2;
  // Root equations
  root1=(-b+std::sqrt((b*b)-(4*a*c)))/(2*a);
  root2=(-b-std::sqrt((b*b)-(4*a*c)))/(2*a);
  //Output Values
  std::cout << "Root 1 is " << root1;
  std::cout << "\nRoot 2 is " << root2 <<"\n";

}

