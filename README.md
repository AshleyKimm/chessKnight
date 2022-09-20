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

Sample tests

Test 1
Input: "a1"
Expected Output: 2

Test 2
Input: "c2"
Expected Output: 6

Test 3
Input: "d4"
Expected Output: 8

Test 4
Input: "g6"
Expected Output: 6

Test 5
Input: "a3"
Expected Output: 4

Test 6
Input: "b7"
Expected Output: 4

Test 7
Input: "h8"
Expected Output: 2


