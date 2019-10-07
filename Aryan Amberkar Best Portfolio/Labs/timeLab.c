//
//  timeLab.c
//  Aryan Amberkar Best Portfolio
//
//  Created by Amberkar, Aryan on 10/4/19.
//  Copyright © 2019 Amberkar, Aryan. All rights reserved.
//
#include "timeLab.h"
#include "portfolio.h"
#include <stdio.h>

int timeLab(void) {
    
    int sec, h, m, s;
    
    printf("Input seconds: ");
    
    scanf("%d", &sec);
    
    
    
    h = (sec/3600);
    
    
    
    m = (sec -(3600*h))/60;
    
    
    
    s = (sec -(3600*h)-(m*60));
    
    
    
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",h,m,s);
    
    
    
    return 0;
    
}
