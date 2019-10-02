//
//  main.c
//  portfolio
//
//  Created by Amberkar, Aryan on 9/13/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//

#include "portfolio.h"
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    
    char name[25];
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("\n Confirming,  your name is: %s",  name);
    
    printf("\n\n %s, what program would you like to run?", name);
    
    //simple script to get user input to choose which lab they'd like
    int input, endOrNo, validInput;
    endOrNo = 0;
    
    while (endOrNo == 0) {
        validInput = 0;
        printf("\n\n To run triangleLab press 1\n To run timeLab press 2\n To run rectangleLab press 3\n");
        
        while (validInput == 0) {
            scanf("%d", &input);
            switch(input) {
                case 1:
                    validInput = 1;
                    //insert your functions here, you can copy paste this case code for each case
                    square();
                    break;
                case 2:
                    validInput = 2;
                    minutes();
                    break;
                case 3:
                    validInput = 3;
                    rectangle();
                    break;
                case 4:
                    validInput = 4;
                    endOrNo = 1;
                    
                default:
                    printf("invalid input, try again\n");
                    break;
                    
            }
        }
    }
    
    return 0;
}
