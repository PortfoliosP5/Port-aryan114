//
//  pythagorasLab.c
//  Aryan's Portfolio
//
//  Created by Amberkar, Aryan on 9/27/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//

#include <stdio.h>
#include "portfolio.h"
#include <math.h>

int pythagorasLab(void){
    
    float a,b,c;
    printf("What is the value of one side?\n");
    scanf("%f", &a);
    printf("What is the value of another side\n");
    scanf("%f", &b);
    
    c = sqrt(a*a + b*b);
    printf("The length of your hypotenuse is %.2f\n", c);
    return 0;
}
