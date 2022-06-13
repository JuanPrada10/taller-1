#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int n, z, i;
  do
  {
    cout << "ingrese el primer y el segundo numero \n";
    cin >> n >> z;
    if (n > z)
    {
      cout << "vuelva a ingresar los datos, teniendo en cuenta que el primero debe ser mayor que el segundo\n";
    }
  } while (n > z);

  cout << "los divisores son\n";
  for (int i = n; i <= z; i++)
  {

    if (i % 3 == 0)
    {
      cout << i << endl;
    }
  }

  getch();
  return 0;
}
