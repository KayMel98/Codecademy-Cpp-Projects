#include <iostream>
#include <vector>
#include <string>

int main() {
  // Whale, whale, whale.
  // What have we got here
  std::string input = "turpentine and turtles";

  // Create vector for vowels and for results
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  // Loop through input to translate
  for (int i = 0; i < input.size(); i++){
    // loop to find vowels in input str
    for (int j = 0; j < vowels.size(); j++ ){
      if (input[i] == vowels[j]){
        result.push_back(input[i]);
      }
    if (input[i] == 'e') {
      result.push_back(input[i]);
    }
     if (input[i] == 'u') {
      result.push_back(input[i]);
    }
    }
  }
  // loop to check work
  for (int k = 0; k < result.size(); k++){
    std::cout << result[k];
  }
}
