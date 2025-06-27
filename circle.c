//wap to draw a circle

#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>

int main() 
{ 
	int gd = DETECT, gm; 

	initgraph(&gd, &gm, "C:\\users\\acer\\desktop\\c"); 
 
	circle(250, 200, 50); 

	getch(); 

	// closegraph function closes the 
	// graphics mode and deallocates 
	// all memory allocated by 
	// graphics system . 
	closegraph(); 

	return 0; 
} 

