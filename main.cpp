/*
Branden Lee
CIS 22B
Fall 2017
Assignment B
Problem B1

Used Microsoft Visual Studio 2017

Prompts user for the height and radius to return the volume of a cone.
Demonstrates the use of data structures.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

/**************************************************
** global structure, functions, and variables
**************************************************/
struct Cone
{
	double height;
	double radius;
};

void input (double& height, double& radius);
void setUp (double height, double radius, Cone* conePtr);
double getVolume (Cone* conePtr);
void output (Cone* conePtr);

const double PI = 3.14159265358979323846;

int main ()
{
	Cone* ptr = new Cone ();
	double height;
	double radius;
	input (height, radius);
	setUp (height, radius, ptr);
	output (ptr);
	delete ptr;
	//system("pause");
	return 0;
}

/********************* input **********************
** Reads the height and radius from the user as
** reference parameters
**************************************************/
void input (double& height, double& radius)
{
	cout << "Enter height of the cone and radius of the base " << endl
		<< "with spaces between the two values. i.e. 6 2" << endl;
	cin >> height >> radius;
}

/********************* setUp **********************
** Puts the data into the data structure
** height and radius into a pointer to the Cone
**************************************************/
void setUp (double height, double radius, Cone* conePtr)
{
	(*conePtr).height = height;
	(*conePtr).radius = radius;
}

/********************* getVolume ******************
** Computes the volume from a pointer to the Cone
** Returns the volume V = Π r2 h / 3
**************************************************/
double getVolume (Cone* conePtr)
{
	return PI * (*conePtr).radius*(*conePtr).radius * (*conePtr).height / 3.0;
}

/********************* output *********************
** Calls the getVolume function to get the volume
** Prints the height, radius, and volume in a neat
** format
**************************************************/
void output (Cone* conePtr)
{
	cout << endl << "The values of the cone are: " << endl
		<< "height: " << setw (8) << right << (*conePtr).height << endl
		<< "radius: " << setw (8) << right << (*conePtr).radius << endl
		<< "volume: " << setw (8) << right << fixed << setprecision (2) << getVolume (conePtr) << endl;
}

/* Execution results
Enter height of the cone and radius of the base
with spaces between the two values. i.e. 6 2
6 2

The values of the cone are:
height:        6
radius:        2
volume:     8.89
*/