#include <iostream>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06);

int main()
{

    double cost {0};
    cost = calc_cost(200.0);        // will use default tax
    cost = calc_cost(100.0, 0.08)   // will use 0.08 not the default
    
    return 0;
}

double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate);
}
