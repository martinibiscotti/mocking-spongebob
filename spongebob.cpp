#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
  string sponge;
  getline(cin, sponge);

  for (unsigned i = 0; i < sponge.length(); ++i)
  {
    if (unsigned bob = (rand() & 1) == 0)
    {
      sponge[i] = tolower(sponge[i]);
    }
    else
    {
      sponge[i] = toupper(sponge[i]);
    }
  }

  cout << sponge;

  return 0;
}