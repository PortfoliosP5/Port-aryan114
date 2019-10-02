//
//  temperatureLab.c
//  Aryan's Portfolio
//
//  Created by Amberkar, Aryan on 9/27/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//

#include "temperatureLab.h"
#include "portfolio.h"
#include <stdio.h>
int temperatureLab(void)

{
    
    float celsius, fahrenheit;
    
    
    
    // Input temperature in celsius
    
    printf("Enter temperature in Celsius: ");
    
    scanf("%f", &celsius);
    
    
    
    // celsius to fahrenheit conversion formula
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    
    
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    
    
    
    return 0;
    
}
