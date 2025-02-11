#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
float angle = 0;
float circularRadius = 220;


float waveAmplitude = 20;
float waveFrequency = 13;


void iUpdate() {
	angle += 0.02f;
	if (angle > 2 * 3.14159f) {
		angle -= 2 * 3.14159f;
	}
}
void iDraw()
{
	iClear();
	iClear();
	int x = 1000 / 2 + circularRadius * cos(angle);
	int y = 800 / 2 + circularRadius * sin(angle);


	y += waveAmplitude * sin(waveFrequency * angle);

	iSetColor(139, 69, 19);
	iFilledCircle(x - 50, y, 100);


	iFilledCircle(x - 120, y + 80, 40);
	iFilledCircle(x + 20, y + 80, 40);


	iSetColor(210, 105, 30);
	iFilledCircle(x - 120, y + 80, 25);
	iFilledCircle(x + 20, y + 80, 25);


	iSetColor(0, 0, 0);
	iFilledCircle(x - 80, y + 20, 10);
	iFilledCircle(x - 20, y + 20, 10);


	iSetColor(0, 0, 0);
	iFilledCircle(x - 50, y - 30, 15);


	iSetColor(0, 0, 0);
	iLine(x - 50, y - 45, x - 50, y - 60);
	iLine(x - 50, y - 60, x - 65, y - 75);
	iLine(x - 50, y - 60, x - 35, y - 75);

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1000, 800, "Project Title");
	///updated see the documentations
	iSetTimer(20, iUpdate);
	iStart();
	return 0;
}