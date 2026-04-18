#include <iostream>
using namespace std; 

int main() {
    int a,b; //Declaracion de variables, "int" para almacenar los numeros y son enteros solo enteros
   
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

  //operaciones aritmeticas
  int suma = a + b;
  int diferencia = a - b;
  int producto = a * b;
  int division = a / b;
  int division2 = a % b; //operador modulo para obtener el residuo de la division
  int elevarAlCuadradoDeSuma = (a + b) * (a + b); //elevar al cuadrado la suma de a y b

  //mostrar resultados
    cout << "La suma es: " << suma << endl;
    cout << "La diferencia es: " << diferencia << endl;
    cout << "El producto es: " << producto << endl;
    cout << "La division es: " << division << endl;
    cout << "El residuo de la division es: " << division2 << endl;
    cout << "La suma al cuadrado es: " << elevarAlCuadradoDeSuma << endl;
    
    
/*operaciones logicas y de comparacion
    bool ambosPositivos = (a > 0) && (b > 0);
    bool algunoMayor100 = (a > 100) || (b > 100);
*/

    return 0;


    
}
