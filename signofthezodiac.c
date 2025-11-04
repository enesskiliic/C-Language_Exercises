#include <stdio.h>

int main()
{

    int month;
    int day;
    printf("Enter your birth month (1-12): \n");
    scanf("%d", &month);

    if (month < 1 || month > 12)
    {
        printf("Invalid date!\n");
    }
    else
    {
        printf("Enter your birth day: \n");
        scanf("%d", &day);
        if (day < 1 || day > 31)
        {
            printf("Invalid date!\n");
        }
        else
        {
            switch (month)
            {

            case 1:
                if (day < 20)
                {
                    printf("Your zodiac sign is: Capricorn");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Aquaris");
                }
                break;

            case 2:
                if (day < 19)
                {
                    printf("Your zodiac sign is: Aquaris");
                }
                else if (day <= 28)
                {
                    printf("Your zodiac sign is: Pisces");
                }
                break;

            case 3:
                if (day < 21)
                {
                    printf("Your zodiac sign is: Pisces");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Aries");
                }
                break;

            case 4:
                if (day < 20)
                {
                    printf("Your zodiac sign is: Aries");
                }
                else if (day <= 30)
                {
                    printf("Your zodiac sign is: Taurus");
                }
                break;

            case 5:
                if (day < 21)
                {
                    printf("Your zodiac sign is: Taurus");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Gemini");
                }
                break;

            case 6:
                if (day < 21)
                {
                    printf("Your zodiac sign is: Gemini");
                }
                else if (day <= 30)
                {
                    printf("Your zodiac sign is: Cancer");
                }
                break;

            case 7:
                if (day < 23)
                {
                    printf("Your zodiac sign is: Cancer");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Leo");
                }
                break;

            case 8:
                if (day < 23)
                {
                    printf("Your zodiac sign is: Leo");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Virgo");
                }
                break;

            case 9:
                if (day < 23)
                {
                    printf("Your zodiac sign is: Virgo");
                }
                else if (day <= 30)
                {
                    printf("Your zodiac sign is: Libra");
                }
                break;

            case 10:
                if (day < 23)
                {
                    printf("Your zodiac sign is: Libra");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Scorpio");
                }
                break;

            case 11:
                if (day < 22)
                {
                    printf("Your zodiac sign is: Scorpio");
                }
                else if (day <= 30)
                {
                    printf("Your zodiac sign is: Sagittarius");
                }
                break;

            case 12:
                if (day < 22)
                {
                    printf("Your zodiac sign is: Sagittarius");
                }
                else if (day <= 31)
                {
                    printf("Your zodiac sign is: Capricorn");
                }
                break;

            default:
            }
        }
    }
}