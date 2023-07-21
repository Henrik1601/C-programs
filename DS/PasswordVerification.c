#include <stdio.h>
#include <stdbool.h>

int validatePassword(char str[])
{
    bool upperCase = false;
    bool lowerCase = false;
    bool specialCase = false;
    bool space = false;
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] > 64 && str[i] < 91){
            upperCase = true;
        }
        if(str[i] > 96 && str[i] < 123){
            count += 1;
        }
        if(str[i] > 57 && str[i] < 65){
            specialCase = true;
        }
        if(str[i] == 32){
            space = true;
        }
    }
    if(count > 5){
        lowerCase = true;
    }
    count = 0;
    if(lowerCase){
        count++;
    }
    if(upperCase){
        count++;
    }
    if(specialCase){
        count++;
    }
    if(space){
        count++;
    }
    return count;
}

int main()
{
    char password[20];
    gets(password);
    int result = validatePassword(password);
    switch(result)
    {
        case 1: printf("Very Weak Password");
        break;
        case 2: printf("Weak Password");
        break;
        case 3: printf("Good Password");
        break;
        default: printf("Strong Password");
        break;
    }
}
