#include <iostream>

int main(int argc, char const *argv[])
{

  int bA;
  int bB;
  int bC;

  for (bA = 1; bA <= 5; bA++)
  {
    for (bB = 1; bB <= 5; bB++)
    {
      for (bC = 1; bC <= 5; bC++)
      {
        if ((bA != bB) && (bB != bC) && (bC != bA))
        {
          std::cout << "A: " << bA << " B: " << bB << " C: " << bC << std::endl;
        }
      }
    }
  }

  return 0;
}
