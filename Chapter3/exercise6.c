#include<stdio.h>
#define quart_to_ml 946.352946
#define mass_per_molecule 3.0e-23
int main(void)
{
    double amount_quart,amount_molecule;

    amount_quart=950/quart_to_ml;
    amount_molecule=950/mass_per_molecule;
    printf("amount of water in quarts:%e quart\n",amount_quart);
    printf("and the number of water molecules in that amount is %e\n",amount_molecule);

    return 0;

}