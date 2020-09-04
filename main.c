// Author: Ji Woong Park jjp6315@psu.edu
// Collaborator: Eric Zhang ecz5032@psu.edu
// Collaborator: Harmon Piatkowski hjp5276@psu.edu
// Collaborator: Chris Belt cob5463@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  double tempf = temp * 9/5 + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, tempf);
  return 0;
}