//
//  main.c
//  CountDown
//
//  Created by Katherine Owens on 4/12/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[]) {
    int i;
    
    for (i = 99; i > 0; i -= 3) {
        printf("%d\n", i);
        
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    return 0;
}
