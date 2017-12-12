De Anza College<BR>
Dr. Ira Oldham<BR>
Fall 2017<BR>
CIS 22B Intermediate Programming Methodologies in C++<BR>

# Instructions
The volume of a cone is given by the formula:<BR>
V = Π r2 h / 3<BR>
<BR>
For the value of Π use: <BR>
const double PI = 3.14159265358979323846;<BR>
<BR>
Declare a structure named: Cone <BR>
containing:<BR>
<BR>
height	  a double, the height of the cone<BR>
radius	  a double, the radius of the base of the cone<BR>
<BR>
Create the following functions:<BR>
<BR>
main<BR>
<BR>
- Contains three variables:
    - A pointer named ptr which points to a Cone structure
    - A double named height
    - A double named radius
- Uses new to obtain space for the data structure
- Calls the the input, setUp, and output functions
- Deletes the space that was obtained using new

input:<BR>
<BR>
- Takes the height of the cone and radius of the base as reference parameters
- Reads the height and radius from the user
- Has a return type of void

setUp:<BR>
<BR>
- Takes three parameters by value: height, radius, and a pointer to the Cone
- Puts the data into the data structure
- Has a return type of void

getVolume:<BR>
<BR>
- Takes one parameter by value: a pointer to the Cone
- Computes the volume
- Returns the volume

output:<BR>
<BR>
- Takes one parameter by value: a pointer to the Cone
- Calls the getVolume function to get the volume
- Prints the height, radius, and volume in a neat format
- Has a return type of void

Put the main function first. <BR>
Use the function and variable names specified above. <BR>
Arrange the functions in the order listed above.<BR>
<BR>
Test your program with the following data: <BR>
<BR>
height	  6<BR>
radius	  2<BR>
<BR>

# Outcome
Not Graded Yet