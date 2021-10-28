
#include "number.h"

double absolute(double d)
{
  return d < 0 ? -d : d;
}

int isPrime(int n)
{
  int ok = 1;
  for (int i = 2; i < n && ok; i++)
  {
    if (n % i == 0)
    {
      ok = 0;
    }
  }

  return ok;
}
