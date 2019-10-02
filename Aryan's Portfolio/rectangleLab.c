//
//  rectangleLab.c
//  Aryan's Portfolio
//
//  Created by Amberkar, Aryan on 9/27/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//

#include "rectangleLab.h"
#include <stdio.h>
#include "portfolio.h"
#include <math.h>
int rectangleLab(void)

{
    
    float perimeter;
    
    float l,b,area;
    
    
    
    printf("Enter the value of length:\n");
    
    scanf("%f",&l);
    
    
    
    printf("Enter the value of width:\n");
    
    scanf("%f",&b);
    
    
    
    area=l*b;
    
    perimeter=((2*l)+(2*b));
    
    
    
    printf("Area of width: %f\n",area);
    
    printf("Perimeter of rectangle is: %f\n", perimeter);
    
    return 0;
    
}
