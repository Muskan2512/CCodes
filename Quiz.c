#include<stdio.h>
#include<string.h>
int main(){

    char question[5][30]={
        "How are you",
        "What do u do",
        "How much do u earn",
        "Who u love the most",
        "What u love te most"
    };
    char ans[5][30]={
        "I am fine",
        "I am a student",
        "50 lakhs",
        "My Pops,Mumma and mera Gudda",
        "Spending time with my family"        
    };
    int score=0;
    int question_count=1;
    printf("Lets begin the quiz\n");
    for(int i=0;i<5;i++){
        printf("Question %d is %s- ",i+1,question[i]);
        printf("\nYour ans:");
        char str[50];
        gets(str);
        if(strcmp(str,ans[i])==0) score++;        
    }
    printf("Score is: %d",score);

    return 0;
}