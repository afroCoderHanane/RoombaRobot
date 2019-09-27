
#include "robotPoint.h"
using namespace std;
//class function to set the x position 
void RobotPoint::setX_e()
{
	x =1+ x;
}
void RobotPoint::setX_w()
{
	x = x -1 ;
}
// class function to set the y position
void RobotPoint::setY_n()
{
	y =1+ y;
}
void RobotPoint::setY_s()
{
	y = y-1;
}
int RobotPoint::getX()
{
	return x;
}
int RobotPoint::getY()
{
	return y;
}
// Default Constructor
RobotPoint::RobotPoint()
{
	x = 0;
	y = 0; 

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			storLocation[i][j] =  '*' ;
		}
	}
}
//destructor
RobotPoint::~RobotPoint()
{
	cout << "all object are destroyed" << endl;
}
//display 
void RobotPoint::displayLocation()
{
	cout << "the robot is at position  (" << getY() << "," << getX() << ")" << endl;
	
			 
		
}
void RobotPoint::setRobot()
{
	
	char val = '*';
	storLocation[getX()][getY()] = val;

}
void RobotPoint::setRobotEmpty()
{

	char val1 = 'X';
	storLocation[getX()][getY()] = val1;

}

void RobotPoint::RobotLocation()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << storLocation[i][j]; 
		}
		cout << endl;
	}
}