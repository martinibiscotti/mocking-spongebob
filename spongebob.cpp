#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  std::string sponge;
  getline(std::cin, sponge);

  for (int i = 0, bob = 0; i < sponge.length(); ++i, bob = rand() & 1)
  {
    sponge[i] = bob ? tolower(sponge[i]) : toupper(sponge[i]);
  }

  std::cout << sponge;

  return 0;
}