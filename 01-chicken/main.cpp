#include <iostream>

int main(int argc, char const *argv[])
{
  // Given condition
  int maxNum = 100;
  int maxMoney = 100;

  // number of cock, hen, and chicken
  int nCock;
  int nHen;
  int nChick;

  // maximum number of cock, hen, and chicken we can buy with given money
  int maxCock = int(maxMoney / 5);
  int maxHen = int(maxMoney / 3);
  int maxChick = int(maxMoney / 1);

  // for loop to loop through all kinds of  combinations
  for (nCock = 0; nCock <= maxCock; nCock++)
  {
    for (nHen = 0; nHen <= maxHen; nHen++)
    {
      nChick = 100 - nCock - nHen;
      // check condition
      if (nChick % 3 == 0)
      {
        int totalMoney = 5 * nCock + 3 * nHen + int(1 * nChick / 3);
        if (totalMoney == 100)
        {
          std::cout << "Solution:\n";
          std::cout << "Number of cock    = " << nCock << std::endl;
          std::cout << "Number of Hen     = " << nHen << std::endl;
          std::cout << "Number of Chicken = " << nChick << std::endl;
        }
      }
    }
  }

  return 0;
}
