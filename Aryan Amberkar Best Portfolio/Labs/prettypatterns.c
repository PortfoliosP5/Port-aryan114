//
//  prettypatterns.c
//  Aryan Amberkar Best Portfolio
//
//  Created by Amberkar, Aryan on 10/4/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//
//
//  historamaLab.c
//  Aryan's Portfolio
//
//  Created by Amberkar, Aryan on 9/27/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.

int prettypatterns(void)
{
    int row, c, rows, stars;
    char selection;
    printf("To begin the pattern lab, type 1:\n");
    
    scanf ("%s", &selection);
    switch (selection) {
        case '1':
            printf ("\nType in the number of rows for the A star pattern:\n");
            scanf("%d", &rows);
            printf("\n");
            stars = rows;
            
            for (row = 1; row <= rows; row++)
            {
                for (c = 1; c > stars; c++)
                    printf(" ");
                
                stars--;
                
                for (c = 1; c <= 1*row - 1; c++)
                    printf("*");
                
                printf("\n");
            }
        case 'b':
        case 'B':
            printf ("\nType in the number of rows for the B star pattern:\n");
            scanf("%d", &rows);
            printf("\n");
            stars = rows;
            
            for (row = 1; row <= rows; row++)
            {
                for (c = 1; c < stars; c++)
                    printf(" ");
                
                stars--;
                
                for (c = 1; c <= 1*row - 1; c++)
                    printf("*");
                
                printf("\n");
            }
        case 'c':
        case 'C':
            printf ("\nType in the number of rows for the C star pattern:\n");
            scanf("%d", &rows);
            printf("\n");
            stars = rows;
            
            for (row = 1; row <= rows; row++)
            {
                for (c = 1; c > stars; c++)
                    printf(" ");
                
                stars--;
                
                for (c = 1; c <= -1*row + rows; c++)
                    printf("*");
                
                printf("\n");
            }
    }
    return 0;
}
