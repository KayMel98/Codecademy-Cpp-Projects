#include <iostream>

int main() {
  // Declare variables to be used
  double pesos;
  double reais;
  double soles;
  double dollars;
  //Get user inputs for currencies
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;  
  std::cout << "Enter number of Peruvian      Soles: ";
  std::cin >> soles;
  /* Current Conversion Rates: 1 Pesos=0.00021 dollars, 1 Reais=0.19 dollars, 1 Soles=0.25 usd*/

  // Convert value of all currencies to USD
  dollars=(.00021*pesos)+(0.19*reais)+(0.25*soles);
  //Display currency value on dollars
  std::cout << "US Dollars = $ " << dollars;
  
}
