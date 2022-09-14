If position of knight = d5, the possible moves it can make are:

		c7	e7
	b6			f6
		 {d5}
	b4			f4
		c3	e3

c7, e7, b6, f6, b4, f4, c3, e3.

These moves can be calculated by:
(x position - 2, y position +- 1)
(x position - 1, y position +- 2)
(x position + 1, y position +- 2)
(x position + 2, y position +- 1)

or,
(x position +- 1, y position - 2)
(x position +- 2, y position - 1)
(x position +- 2, y position + 1)
(x position +- 1, y position + 2)

Inspecting the pattern of its possible moves, 
if (x position + i, y position + j),
abs(i) and abs(j) cannot be the same numbers, and cannot equal to 0. 

i.e.) If i = 1, then j = +- 2.
	  If j = -2, then i = +- 1.

Therefore, using a casted for loop similar to bubblesort method, 
int solution(std::string cell) checks if:
	- i and j are non-zero numbers
	- abs(i) and abs(j) are different numbers
	- the calculated knight's move is within the chessboard

If all the conditions are met, int variable cnt increments by 1.
