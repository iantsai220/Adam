//
//  main.c
//  Adam
//
//  Created by Ian Tsai on 2015-05-05.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void respond(char *response){
    printf(">> %s\n\n",response);
}

void Adam (char *a) {
    
    int caps = 0;
    
    for (int index = 0; index < strlen(a); index++) {
        if (isspace(a[index]))
        {
            continue;
        }else if (islower(a[index])) {
            caps = 1;
            break;
        }
    }
    
    if (caps == 0) {
        respond("Whoa, Chill out");
    }
    else if (strcmp("Do you want a piece of candy?", a) == 0) {
        respond("Sure!");
    }
    else if (strcmp("Adam", a) == 0) {
        respond("Fine, be that way");
    }
    
    else {respond("Whatever");}
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    char scannedInput[1024];
    
    while (1) {
        
        fpurge(stdin);
        printf("<< ");
        scanf("%[^\n]", scannedInput);
        
        Adam(scannedInput);
        
        if (strcmp("exit", scannedInput) == 0){
            break;
        }
    }
    
    return 0;
}
