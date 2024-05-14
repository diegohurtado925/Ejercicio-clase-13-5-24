#include <iostream>
using namespace std;
int main ()
{
    int n, i = 1, factorial = 1;

    cout << "Ingrese un numero para obtener su factorial: ";
    cin >> n;


    for (i = 1; i <= n; i++) 
    {factorial = factorial*i;}
    
        cout << "El factorial del numero es: " << factorial;
    
return 0;
}