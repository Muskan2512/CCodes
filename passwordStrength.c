#include <stdio.h>

int main() {
    int n=0;
    char str[50];  // +1 to accommodate the null terminator
    printf("Give the Password:");
    scanf("%s", str);
    int upperCase=0,lowerCase=0,number=0,special_chars=0;
        for (int i = 0; str[i] != '\0'; i++) {
            n++;//this will give the count of the characters entered by the user
            if(str[i]>='a' && str[i]<='z')lowerCase++;
            else if(str[i]>='A' && str[i]<='Z')upperCase++;
            else if(str[i]>='0' && str[i]<='9')number++;
            else special_chars++;}
    
    if(n<8){
        printf("Please enter a password of atleast 8 characters.");
        upperCase=0,lowerCase=0,number=0,special_chars=0;
    }else if(upperCase>=1 && lowerCase>=1 && special_chars>=1 && number>=1){
        printf("Password:Strong");
    }else if((upperCase>=1 && lowerCase>=1 && special_chars>=1)||(upperCase>=1 && lowerCase>=1 && number>=1)){
        printf("Password:Average");
    }else{
        printf("Password:Weak");
    }
    return 0;
}
