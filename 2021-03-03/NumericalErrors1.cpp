/*#include <iostream>

int main(void) {
  float a = 0;
  a = 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  std::cout << a <<"\n";
  
  return 0;
}*/

//Al hacer este proceso el programa ve la repetición del término que se suma y por eso da el valor exacto
#include <iostream>

int main(void) {
  float a = 0.0;
  for ( int ii = 1; ii <= 10; ++ii){
    a += 0.1;
  }
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  std::cout << a <<"\n";
  
  return 0;
}

//Aquí por el ciclo for ya encontramos un error de truncamiento 
