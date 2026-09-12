Lab 04 Contracts

countAtRisk

Purpose:
Counts how many students are at risk in the class.

Inputs:
The scores grid.

Output:
Returns the number of students who are at risk.

Preconditions:
The scores grid must contain the students' grades.

Postconditions:
The scores grid is not changed.


findClassExtremes

Purpose:
Finds the lowest and highest scores in the class and which student has each score.

Inputs:
The scores grid.

Outputs:
The lowest score, highest score, and the student row for each one.

Preconditions:
The scores grid must contain the students' grades.

Postconditions:
The scores grid is not changed.


applyCurve

Purpose:
Adds a certain amount of points to every score in the class.

Inputs:
The scores grid and the amount of points being added.

Output:
Updates the scores in the grid.

Preconditions:
The scores grid must contain the students' grades.

Postconditions:
Every score is increased by the curve amount, but no score can go above 100.


topStudent

Purpose:
Finds the student with the highest average grade.

Inputs:
The scores grid.

Output:
Returns the row of the student with the highest average.

Preconditions:
The scores grid must contain the students' grades.

Postconditions:
The scores grid is not changed.
