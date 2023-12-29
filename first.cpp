#include <iostream>

int main()
{
  int number;
  std::cout << "Enter your favorite number between 1 and 100: ";
  std::cin >> number;

  if (number == 24)
  {
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    return 0;
  }

  std::cout << "No really!! 24 is my favorite number!" << std::endl;

  return 0;
}