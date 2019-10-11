#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  std::string sponge;
  cout << "input: "
  getline(std::cin, sponge);

  for (int i = 0, bob = 0; i < sponge.length(); ++i, bob = rand() & 1)
  {
    sponge[i] = bob ? tolower(sponge[i]) : toupper(sponge[i]);
  }

  std::cout << "output: " << sponge;

  return 0;
}