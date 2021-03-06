/*#include <iostream>

int main(void) {
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  float under = 1.0;
  float over = 1.0;
  int NMAX = 200;
  int n = 0;
  while (n <= NMAX) {
    under = under/2;
    over = over*2;
    std::cout << n << "\t" << under << "\t" << over <<"\n";
    n++;
  }
  return 0;
}*/

//Aquí podemos ver que over se vuelve "infinito" desde 127 (overflow), mientras que under se vuelve "cero" en 149 (underflow)

//Ahora veremos en qué momento empiezan los errores al utilizar precisión doble (double)

#include <iostream>

int main(void) {
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  double under = 1.0;
  double over = 1.0;
  int NMAX = 1074;
  int n = 0;
  while (n <= NMAX) {
    under = under/2;
    over = over*2;
    std::cout << n << "\t" << under << "\t" << over <<"\n";
    n++;
  }
  return 0;
}

//Aquí vemos que el overflow ocurre en 1023 y el underflow en 1074, es decir, con precisión doble podremos abarcar más números
