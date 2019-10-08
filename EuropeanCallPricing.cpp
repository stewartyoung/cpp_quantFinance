// #include "random.h" 
#include <iostream> 
// #include <cmath> 
// #include <algorithm>

using namespace std;
int main(){
    // Print to command line that we are starting the pricing
    cout << "\n Monte Carlo European Call Pricing starting ... \n";

    // input parameters
    double T = 3/12; // Maturity Time is three months
    double K = 150; // strike
    double S0 = 144.34; // Barclays spot 07/10/19
    double Sigma = 0.1; //volatility
    double r = 0.0075; // Bank of England interest rate 
    int N=500; // number of steps 
    int M=10000; // number of simulations 
    double S[N+1]; 
    double sumpayoff=0; 
    double premium=0; 
    double dt = T / N;
}