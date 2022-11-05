#include <iostream>

int main() {
  // Declare dogs age, mst be over 2
  int dog_age = 3;
  // Dogs first 2 yrs equal 21 human yrs
  int early_years = 21 ;
  // Initialize other variables
  int later_years;
  int human_years;
  
  //Caluclate later years of dogs age
  later_years=(dog_age-2)*4;
  
  // Calulate dogs age in human yrs
  human_years=early_years+later_years;

  //Output results in readable form
  std::cout << "My name is Moose! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}
