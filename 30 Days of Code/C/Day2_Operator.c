#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip = ((meal_cost*tip_percent)/100);
    //printf("%lf ", tip);
    double tax = (meal_cost*tax_percent)/100;
    //printf("%lf", tax);
    double amount = tip + tax + meal_cost;
    //int j = floor(amount);
    printf("%.0lf", round(amount));
}

int main()
{
	double meal_cost;
	int tip_percent, tax_percent;
	
	scanf("%lf", &meal_cost);
	scanf("%d", &tip_percent);
	scanf("%d", &tax_percent);
	
	solve(meal_cost, tip_percent, tax_percent);
	
	return 0;
}