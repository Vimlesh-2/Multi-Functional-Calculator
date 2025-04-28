#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sizeCalculator() {
    double bytes, kilobytes, megabytes, gigabytes;
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);
    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;
    printf("Size in KB: %.2lf\n", kilobytes);
    printf("Size in MB: %.2lf\n", megabytes);
    printf("Size in GB: %.2lf\n", gigabytes);
}

void rootCalculator() {
    double number, root;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);
    if (number < 0) {
        printf("Error: Cannot compute the square root of a negative number.\n");
    } else {
        root = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, root);
    }
}

void currencyConverter() {
    double amount, convertedAmount;
    int choice;
    printf("Currency Converter:\n");
    printf("1. USD to INR\n");
    printf("2. EUR to INR\n");
    printf("3. GBP to INR\n");
    printf("4. AUD to INR\n");
    printf("5. CAD to INR\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%lf", &amount);

    switch (choice) {
        case 1:
            convertedAmount = amount * 74.0; // Example conversion rate for USD to INR
            printf("Converted amount: %.2lf INR\n", convertedAmount);
            break;
        case 2:
            convertedAmount = amount * 88.0; // Example conversion rate for EUR to INR
            printf("Converted amount: %.2lf INR\n", convertedAmount);
            break;
        case 3:
            convertedAmount = amount * 103.0; // Example conversion rate for GBP to INR
            printf("Converted amount: %.2lf INR\n", convertedAmount);
            break;
        case 4:
            convertedAmount = amount * 54.0; // Example conversion rate for AUD to INR
            printf("Converted amount: %.2lf INR\n", convertedAmount);
            break;
        case 5:
            convertedAmount = amount * 58.0; // Example conversion rate for CAD to INR
            printf("Converted amount: %.2lf INR\n", convertedAmount);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void volumeCalculator() {
    double radius, height, volume;
    printf("Enter radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter height of the cylinder: ");
    scanf("%lf", &height);
    volume = M_PI * radius * radius * height; // Volume of cylinder
    printf("Volume of the cylinder: %.2lf cubic units\n", volume);
}

void lengthConverter() {
    double meters, feet;
    printf("Enter length in meters: ");
    scanf("%lf", &meters);
    feet = meters * 3.28084; // Conversion factor
    printf("Length in feet: %.2lf\n", feet);
}

void weightConverter() {
    double kilograms, pounds;
    printf("Enter weight in kilograms: ");
    scanf("%lf", &kilograms);
    pounds = kilograms * 2.20462; // Conversion factor
    printf("Weight in pounds: %.2lf\n", pounds);
}

void areaCalculator() {
    double length, width, area;
    printf("Enter length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter width of the rectangle: ");
    scanf("%lf", &width);
    area = length * width; // Area of rectangle
    printf("Area of the rectangle: %.2lf square units\n", area);
}

void speedCalculator() {
    double distance, time, speed;
    printf("Enter distance (in kilometers): ");
    scanf("%lf", &distance);
    printf("Enter time (in hours): ");
    scanf("%lf", &time);
    if (time == 0) {
        printf("Error: Time cannot be zero.\n");
    } else {
        speed = distance / time; // Speed calculation
        printf("Speed: %.2lf km/h\n", speed);
    }
}

void powerCalculator() {
    double voltage, current, power;
    printf("Enter voltage (in volts): ");
    scanf("%lf", &voltage);
    printf("Enter current (in amperes): ");
    scanf("%lf", &current);
    power = voltage * current; // Power calculation
    printf("Power: %.2lf watts\n", power);
}

void massCalculator() {
    double grams, kilograms;
    printf("Enter mass in grams: ");
    scanf("%lf", &grams);
    kilograms = grams / 1000; // Conversion to kilograms
    printf("Mass in kilograms: %.2lf\n", kilograms);
}

void displayMenu() {
    printf("\n********************************\n");
    printf("*          Calculator          *\n");
    printf("********************************\n");
    printf("*  1. Size Calculator          *\n");
    printf("*  2. Root Calculator          *\n");
    printf("*  3. Currency Converter       *\n");
    printf("*  4. Volume Calculator        *\n");
    printf("*  5. Length Converter         *\n");
    printf("*  6. Weight Converter         *\n");
    printf("*  7. Area Calculator          *\n");
    printf("*  8. Speed Calculator         *\n");
    printf("*  9. Power Calculator         *\n");
    printf("* 10. Mass Calculator          *\n");
    printf("********************************\n");
    printf("Select a function (1-10): ");
}

void displayKeypad() {
    printf("\nNumeric Keypad with Operators:\n");
    printf(" * * * * * * * * *\n");
    printf(" * 1 * 2 * 3 * + *\n");
    printf(" *---*---*---*---*\n");
    printf(" * 4 * 5 * 6 * - *\n");
    printf(" *---*---*---*---*\n");
    printf(" * 7 * 8 * 9 * * *\n");
    printf(" *---*---*---*---*\n");
    printf(" *   * 0 *   * / *\n");
    printf(" * * * * * * * * *\n");
}

int main() {
    int choice;
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        displayKeypad();
        switch (choice) {
            case 1:
                sizeCalculator();
                break;
            case 2:
                rootCalculator();
                break;
            case 3:
                currencyConverter();
                break;
            case 4:
                volumeCalculator();
                break;
            case 5:
                lengthConverter();
                break;
            case 6:
                weightConverter();
                break;
            case 7:
                areaCalculator();
                break;
            case 8:
                speedCalculator();
                break;
            case 9:
                powerCalculator();
                break;
            case 10:
                massCalculator();
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
        printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if (continueChoice == 0) {
            break;
        }
    }
    return 0;
}
