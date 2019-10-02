//
//  multiplechoiceLab.c
//  Aryan's Portfolio
//
//  Created by Amberkar, Aryan on 9/27/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//

#include "multiplechoiceLab.h"
#include "multiplechoiceLab.h"

int multiplechoiceLab(void){
    
    char inputAnswer;
    //simple script to get user input to choose which lab they'd like
    int validInput, questionAnswered;
    questionAnswered = 0;
    
    //while (endOrNo == 0) {
    
    // Question 1
    validInput = 0;
    printf("\n"); // provide space after previous lab
    printf("---------------------------------\n");
    printf("| 1. Who fuction displays text? |\n");
    printf("|-------------------------------|\n");
    printf("|Options:                       | \n");
    printf("|  A. scanf                     | \n");
    printf("|  B. printf                    | \n");
    printf("|  C. if,then                   | \n");
    printf("|  D. NO SUCH FUNCTION EXISTS   | \n");
    printf("| Select your answer:           | \n");
    printf("----------------------------------\n");
    
    while (validInput == 0) {
        scanf("%s", &inputAnswer);
        if (inputAnswer == 'B') {
            validInput = 1;
            printf("Correct Answer!\n");
        }
        else
        {
            validInput = 0;
            printf("Incorrect answer, please try again\n");
        }
    }
    
    // Question 2
    validInput = 0;
    printf("\n"); // provide space after previous lab
    printf("----------------------------------------\n");
    printf("| 2. What function recalls user input?  |\n");
    printf("|---------------------------------------|\n");
    printf("|Options:                               | \n");
    printf("|  A. scan(f)                           | \n");
    printf("|  B. print(f)                          | \n");
    printf("|  C. f(x) = 1                          | \n");
    printf("|  D. NO SUCH FUNCTION EXISTS           | \n");
    printf("| Select your answer:                   | \n");
    printf("------------------------------------------\n");
    
    while (validInput == 0) {
        scanf("%s", &inputAnswer);
        if (inputAnswer == 'A') {
            validInput = 1;
            printf("Correct Answer!\n");
        }
        else
        {
            validInput = 0;
            printf("Incorrect answer, please try again\n");
        }
    }
    
    // Question 3
    validInput = 0;
    printf("\n"); // provide space after previous lab
    printf("--------------------------------------------\n");
    printf("| 3. What number binary code 110 represent? |\n");
    printf("|-------------------------------------------|\n");
    printf("|Options:                                   | \n");
    printf("|  A. 3                                     | \n");
    printf("|  B. 12                                    | \n");
    printf("|  C. 6                                     | \n");
    printf("|  D. 9                                     | \n");
    printf("| Select your answer:                       | \n");
    printf("----------------------------------------------\n");
    
    while (validInput == 0) {
        scanf("%s", &inputAnswer);
        if (inputAnswer == 'C') {
            validInput = 1;
            printf("Correct Answer!\n");
        }
        else
        {
            validInput = 0;
            printf("Incorrect answer, please try again\n");
        }
    }
    
    
    //}
    
    return 0;
}
