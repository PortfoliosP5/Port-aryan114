//
//  main.c
//  Aryan Amberkar Best Portfolio
//
//  Created by Amberkar, Aryan on 10/4/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//
#include "portfolio.h"
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    
    char name[25];
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("\nConfirming, your name is: %s",  name);
    
    printf("\n\n%s, what program would you like to run?", name);
    
    //simple script to get user input to choose which lab they'd like
    int input, endOrNo, validInput;
    endOrNo = 0;
    
    while (endOrNo == 0) {
        validInput = 0;
        printf("\n"); // provide space after previous lab
        printf("-----------------------------------------\n");
        printf("|      MENU SELECTION PORTFOLIO         |\n");
        printf("|---------------------------------------|\n");
        printf("|Options:                               |\n");
        printf("|  1. Pythagorean Theroem               |\n");
        printf("|  2. Seconds Calculator                |\n");
        printf("|  3. Rectangle Area & Perimeter        |\n");
        printf("|  4. Temperature Converter             |\n");
        printf("|  5. Test Questions                    |\n");
        printf("|  6. Pretty Patterns                   |\n");
        printf("| 99. Exit                              |\n");
        printf("| Select number you would like to run:  |\n");
        printf("-----------------------------------------\n");
        
        while (validInput == 0) {
            scanf("%d", &input);
            switch(input) {
                case 1:
                    validInput = 1;
                    //insert your functions here, you can copy paste this case code for each case
                    pythagorasLab();
                    break;
                case 2:
                    validInput = 2;
                    timeLab();
                    break;
                case 3:
                    validInput = 3;
                    rectangleLab();
                    break;
                case 4:
                    validInput = 4;
                    temperatureLab();
                    break;
                case 5:
                    validInput = 5;
                    multiplechoiceLab();
                    break;
                case 6:
                    validInput = 6;
                    prettypatterns();
                    break;
                case 99:
                    validInput = 99;
                    endOrNo = 1;
                default:
                    printf("Have a nice day!\n");
                    break;
                    
            }
        }
    }
    
    return 0;
}

