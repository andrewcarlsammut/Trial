//
//  main.c
//  StructureAndPointers
//
//  Created by Andrew Carl Sammut on 15/02/2014.
//  Copyright (c) 2014 andrew carl sammut. All rights reserved.
//

#include <stdio.h>
#define FUNDLEN 50


typedef struct funds
{
    char fund1[FUNDLEN];
    double moneyFund1;
    char fund2[FUNDLEN];
    double moneyFund2;
}funds;

double sum(const funds*);

int main(int argc, const char * argv[])
{
    printf("Changing to test");
    funds Mario = { "Valletta Fund", 2000, "Mosta Fund", 3000};
    printf("This is the sum of the funds %f", sum(&Mario));
    return 0;
}

double sum(const funds* money)
{
    return (money->moneyFund1 + money->moneyFund2);
}

