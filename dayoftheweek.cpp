string dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.
    tm date = {0, 0, 0, day, month-1, year-1900}; //initialize the tm struct
    time_t time = mktime(&date); //convert tm struct to time_t format

    const char* weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int dayOfWeek = date.tm_wday; //get day of the week as an integer (0 = Sunday, 1 = Monday, etc.)
    return weekdays[dayOfWeek];
}
