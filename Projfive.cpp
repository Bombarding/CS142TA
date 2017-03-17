#include <iostream>
#include <fstream>
using namespace std;

// This function draws the board.
void drawboard(ostream &, char [][7], int, int);
void drawcolorboard(ostream &, char [][7], int, int);

int main () 
{
	ofstream outfile;
	outfile.open("gamelog01.txt");
	char board [6][7] = {0};

	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 7; y++)
			board[x][y] = '@';
	board[0][0] = '$';
	board[2][4] = '@';
	
	// WRITE YOUR MENU PART HERE!!!
	
	drawcolorboard(cout, board, 6, 7);
	drawboard(outfile, board, 6, 7);
	outfile.close();
	return 0;
} // end main

// Ankur Gupta
void drawboard(ostream & out, char b[][7], int r, int c) 
{
	out << endl;
	for (int x = r-1; x >= 0; x--) 
	{
		out << "|";
		for (int y = 0; y < c-1; y++)
			out << "----";
		out << "---|" << endl << "|";
		for (int y = 0; y < c-1; y++)
			if (b[x][y] == 0)
				out << "   |";
			else
				out << " " << b[x][y] << " |";
		if (b[x][c-1] == 0)
			out << "   | " << x << endl;
		else
			out << " " << b[x][c-1] << " | " << x << endl;
	}
	
	out << "|";
	for (int y = 0; y < c-1; y++)
		out << "----";
	out << "---|" << endl;
	
	out << " ";
	for (int y = 0; y < c; y++)
		out << " " << y << "  ";
	out << endl << endl;

} // end drawboard function

void drawcolorboard(ostream & out, char b[][7], int r, int c) 
{
	// Use this to bold the whole board
	out << "\033[1;37m"; 
	out << endl;
	for (int x = r-1; x >= 0; x--) 
	{
		out << "|";
		for (int y = 0; y < c-1; y++)
			out << "----";
		out << "---|" << endl << "|";
		for (int y = 0; y < c-1; y++)
			if (b[x][y] == 0)
				out << "   |";
			else if (b[x][y] == 'X')
				out << " \033[1;31m" << b[x][y] << "\033[1;37m |";
			else
				out << " \033[1;34m" << b[x][y] << "\033[1;37m |";				
		if (b[x][c-1] == 0)
			out << "   | " << x << endl;
		else if (b[x][c-1] == 'X')
			out << " \033[1;31m" << b[x][c-1] << "\033[1;37m |" << x << endl;
		else
			out << " \033[1;34m" << b[x][c-1] << "\033[1;37m |" << x << endl;
	}
	
	out << "|";
	for (int y = 0; y < c-1; y++)
		out << "----";
	out << "---|" << endl;
	
	out << " ";
	for (int y = 0; y < c; y++)
		out << " " << y << "  ";
	// Use this to bold the whole board
	out << "\033[0m";
	out << endl << endl;

} // end drawboard function


/*
|---------------------------|
| X | X | X | X | X | X | X |5
|---------------------------|
| X | X | X | X | X | X | X |4
|---------------------------|
| X | X | X | X | X | X | X |3
|---------------------------|
| X | X | X | X | X | X | X |2
|---------------------------|
| X | X | X | X | X | X | X |1
|---------------------------|
| O | X | X | X | X | X | X |0
|---------------------------|
  0   1   2   3   4   5   6  
*/

