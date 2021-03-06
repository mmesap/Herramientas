/*#include <iostream>

int main(void) {
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  float eps = 1.0;
  float one = 0.0;
  int NMAX = 100;
  int n = 0;
  while (n <= NMAX) {
    eps = eps/2;
    one = 1.0 + eps;
    std::cout << n << "\t" << one << "\t" << eps <<"\n";
    n++;
  }
  return 0;
}*/

//vemos que a partir del 23 ya nos afectala precisión de la máquina y todos los datos toman el valor de 1

//Ahora probaremos para precisión doble 

#include <iostream>

int main(void) {
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  double eps = 1.0;
  double one = 0.0;
  int NMAX = 100;
  int n = 0;
  while (n <= NMAX) {
    eps = eps/2;
    one = 1.0 + eps;
    std::cout << n << "\t" << one << "\t" << eps <<"\n";
    n++;
  }
  return 0;
}

//Aquí la precisión de la máquina nos va a afectar un poco después, en el dato 24
