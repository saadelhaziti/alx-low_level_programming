#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 62
#define MAX_PASSWORD_SIZE 100

int main(void) {
    int i, rand_index;
    char password[MAX_PASSWORD_SIZE];
    char valid_chars[PASSWORD_LEN] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                                      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                                      'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                                      'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
                                      'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                                      'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                                      'Y', 'Z'};
    
    srand(time(NULL));
    
    for (i = 0; i < MAX_PASSWORD_SIZE; i++) {
        rand_index = rand() % PASSWORD_LEN;
        password[i] = valid_chars[rand_index];
    }
    
    password[MAX_PASSWORD_SIZE - 1] = '\0';
    
    printf("%s", password);
    
    return 0;
}
