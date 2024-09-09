// Amylyn Miller
// COP 3223, Professor Parra
// Assignment 1
// 09-08-2024
// Code to intake dementions, perform calculations, and output results. 

// Import Librairies
#include <stdio.h>
#include <math.h>

// Initialize Variables
double value = 0;

// Function to ask for user input

double askForUserInput(){
    printf("Input value: ");
    scanf("%lf", &value);

    return value;

}

// Function to do heavy lifting on distance calculations
double distmath(double x1, double y1, double x2, double y2){
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return dist;
}

// Function to Calculate Distance with input frome user
// Input: 2 points from user
// Output: reiterate inputs and distance between points
// Initialize Variables
double point1x = 0;
double point1y = 0;
double point2x = 0;
double point2y = 0;

// Begin function
double calculateDistance(){
    double point1x = askForUserInput(); 
    double point1y = askForUserInput(); 
    double point2x = askForUserInput(); 
    double point2y = askForUserInput(); 

    double distance = sqrt(pow(point2x - point1x, 2) + pow(point2y - point1y, 2));

    printf("The distance between the two points is %lf \n", distance);

    return distance;
}

// Function to calculate Perimeter
// Inputs: 
// Outputs: 
// Start Function
double calculatePerimeter(){

    // Gather input from user
    double point1x = askForUserInput(); 
    double point1y = askForUserInput(); 
    double point2x = askForUserInput(); 
    double point2y = askForUserInput(); 
    double point3x = askForUserInput(); 
    double point3y = askForUserInput(); 
    double point4x = askForUserInput(); 
    double point4y = askForUserInput(); 

    // Use distmath function to find distances between all points
    double d1 = distmath(point1x, point1y, point2x, point2y);
    double d2 = distmath(point2x, point2y, point3x, point3y);
    double d3 = distmath(point3x, point3y, point4x, point4y);
    double d4 = distmath(point4x, point4y, point1x, point1y);

    double perimeter = d1 + d2 + d3 + d4;

    // Reiterate information provided
    printf("Point #1 Entered = 1x = %lf; 1y = %lf", point3x, point3y);
    printf("Point #2 Entered = x2 = %lf; 2y = %lf", point4x, point4y);

    // Print calculated perimeter
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    double difficulty = 3.75;

    return difficulty;
}


// Function to calculate area 
// Output: 3 lines of text reiterating user input, calculate area of the city
// Return: difficulty rating
// Initilize Variables

double calculateArea(){
    // Gather input from user
    double point1x = askForUserInput(); 
    double point1y = askForUserInput(); 
    double point2x = askForUserInput(); 
    double point2y = askForUserInput();  

    double length = distmath(point1x, point1y, point2x, point2y);
    double width = sqrt(pow(point1x - point1x, 2) + pow(point2y - point2y, 2));

    double area = length * width; 

    // Reinterate information provided

    printf("Point #1 Entered = 1x = %lf; 1y = %lf", point1x, point1y);
    printf("Point #2 Entered = x2 = %lf; 2y = %lf", point2x, point2y);

    printf("The Area encompassed by your request is %lf", area); 

    return 4; // Return difficulty score
}

// Function to calculate Width
// Returns difficulty rating
// Prints 3 lines of code reinterating information provided and gives width
// Initialize variables

double calculateWidth(){
    double point1x = askForUserInput(); 
    double point1y = askForUserInput(); 
    double point2x = askForUserInput(); 
    double point2y = askForUserInput(); 

    double width = distmath(point1x, point1y, point2x, point2y);

    // Reinterate information provided
    printf("Point #1 Entered = 1x = %lf; 1y = %lf", point1x, point1y);
    printf("Point #2 Entered = x2 = %lf; 2y = %lf", point2x, point2y);

    // Print width
    printf("The width of the city provided is %lf", width);

    return 3;
}

// Function to calculate height
// Outputs 3 lines of text, two reiterate the information provided, ones gives height. 
// Initialize variables
double point7x = 0;
double point7y = 0;
double point8x = 0;
double point8y = 0;

double calculateHeight(){
    double point1x = askForUserInput(); 
    double point1y = askForUserInput(); 
    double point2x = askForUserInput(); 
    double point2y = askForUserInput(); 
}

// Main function
int main(int argc, char**argv){
printf("When prompted, input the X and Y values for the points. Starting with X.\n");
calculateDistance();
calculatePerimeter(); 
calculateArea();
calculateWidth();
calculateHeight();

return 0;
}