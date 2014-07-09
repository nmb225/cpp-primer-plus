#include <iostream>

using namespace std;

int main() {
  float dInvestment = 0.0, cInvestment = 0.0;
  float dBalance = 100.0, cBalance = 100.0;
  const float dAPR = 0.1, cAPR = 0.05;

  int years = 0;
  while (cInvestment <= dInvestment)
  {
  	dInvestment += dBalance * dAPR;
  	cInvestment += cBalance * cAPR;
  	cBalance += cAPR * cBalance;
  	years++;
  }
  cout << "It took " << years << " for Cleo's investment ("
  	   << cInvestment << ") "
  	   << "to exceed Daphne's investment (" << dInvestment << ").\n"; 
  return 0;
}
