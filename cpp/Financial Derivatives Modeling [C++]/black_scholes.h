#ifndef __BLACK_SCHOLES_H
#define __BLACK_SCHOLES_H

class BlackScholesCall {
    private:
        double S; // Underlying asset price
        double K; // Strike Price
        double r; // Risk-Free Rate
        double T; // Time to Maturity
    
    public:
        BlackScholesCall(double _S, double _K, double _r, double _T);
        
    double option_price(double sigma) const;
    double option_vega(double sigma) const;
};

#endif