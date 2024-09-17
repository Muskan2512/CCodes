#include <stdio.h>

int main()
{
    char str[12][10] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for(int i=0;i<12;i++){
        printf("%s ",str[i]);
    }
    // int days_in_month[12] = {
    //     31, // January
    //     28, // February
    //     31, // March
    //     30, // April
    //     31, // May
    //     30, // June
    //     31, // July
    //     31, // August
    //     30, // September
    //     31, // October
    //     30, // November
    //     31  // December
    // };

    // int year;
    // printf("Enter the year:");
    // scanf("%d",&year);
    // if(year%4==0 && year%100!=0)printf("leap year");
    // else if(year%4==0 && year%100==0 && year%400==0)printf("Leap year");
    // else printf("Non leap year");

    // char *days_of_week[7] = {
    //     "Sunday",    // 0
    //     "Monday",    // 1
    //     "Tuesday",   // 2
    //     "Wednesday", // 3
    //     "Thursday",  // 4
    //     "Friday",    // 5
    //     "Saturday"   // 6
    // };
    // int day;
    // printf("Enter the day on the first day of the month:");
    // scanf("%d", &day);
    // printf("The day is:%s", days_of_week[day]);
    // printf("\nEnter the date whose day u want to know:");
    // int date;
    // scanf("%d", &date);
    // int index = ((date-1) % 7);
    // printf("The day on %d is %s.", date, days_of_week[(day+index)%7]);


//     char days_of_week[7][4] = {
//     "Sun" ,  // Sunday
//     "Mon",  // Monday
//     "Tue",  // Tuesday
//     "Wed",  // Wednesday
//     "Thu",  // Thursday
//     "Fri",  // Friday
//     "Sat",  // Saturday
// };
// int start_day;
//     printf("Enter the day on the first day of the month:");
//     scanf("%d", &start_day);
//     printf("The day is:%s", days_of_week[start_day]);
//     printf("\n");

// for(int i=0;i<7;i++){
//     printf("%s ",days_of_week[i]);
// }
// printf("\n");
// for(int i=1;i<=(start_day%7);i++){
//     for(int j=0;j<4;j++){
//         printf(" ");
//     }
// }
// for(int i=1;i<=30;i++){
//     if(i<10)printf("0%d  ",i);
//     else{
//     printf("%d  ",i);
//     }
//     // printf("  ");
//     if((i+start_day)%7==0)
//     printf("\n");
// }
    return 0;
}