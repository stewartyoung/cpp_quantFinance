# Quantitative Finance Applications with C++ 

###### Used a useful tool to make this Markdown document called pandoc

## 1. The Bento Box approach to option pricing
1. Description of the contract. The underlying asset, the counterparties involved, the cashflows, the payment dates, other conditions and payoff function 

2. The mathematical model for the underlying described in 1. 

3. The numerical method to solve the mathematical model specified in 2.

4. The algorithm to perform the numerical method mentioned in 3.

## Example of the Bento Box (EuropeanCallPricing.cpp)
1. European call option on the FTSE 100 is purchased at t=0 for maturity T = 3 months. The payoff at maturity is: 
![img](https://user-images.githubusercontent.com/36263575/66340256-b37af480-e93c-11e9-8545-a14cd12f01b7.png)  


2. Under the (very huge, and rarely accurate) assumption that FTSE 100 follow Geometric Brownian Motion (GBM), it can follow the mathematical model: 


![img](https://user-images.githubusercontent.com/36263575/66341375-0655ab80-e93f-11e9-9d5b-41aaf66c3535.png)

3. Using Monte Carlo Simulation as the numerical method, we get the **Discounted Payoff, P** as:
![image](https://user-images.githubusercontent.com/36263575/66341722-c5aa6200-e93f-11e9-876e-28abd9fb2d02.png)

4. Pseudocode for Monte Carlo Simulation 
**Input:** Spot-price S, Strike K, Maturity T, Risk Free Rate r, volatility σ, Number of Simulations M, Time Steps N 
**Output:** Estimate for derivative price 
for i in 1:M
    for j in 1:N
        simulate GBM formula and move forward one time step
    end
    calculate underlying asset price at maturity
    calculate payoff at maturity
end
calculate premium as discounted expected value of payoffs under the Q measure

## Running the algorithm
1. Run g++ [filename.cpp] (not gcc, thats for C) to compile the C++ code
2. ./a.out will run the program
