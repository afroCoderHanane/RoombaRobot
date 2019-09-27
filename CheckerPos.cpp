#include "CheckerPos.h"
using namespace std;
void CheckerPos::Point(RobotPoint Robot)
{
	//cout << " position of the robot is (" << Robot.getX() << "," << Robot.getY() << ")/n";
	char input = 't';
	
	while (input != 'q')
	{
		Robot.setRobotEmpty();
		Robot.RobotLocation();
		Robot.setRobot();
		
		Robot.displayLocation();
		cout << "Which direction did you want to move : Press (e)for East, (w) for West," << endl;
		cout << " Press (e)for East, (w) for West,(n) for North and (s) for South or (q) to quit" << endl;
		cout << " or Press Upercase to go to the end part of the direction" << endl;
		cout << endl;
		cin >> input;
		if (input == 'e')//n
		{
			if (Robot.getY() != 9)
			{
				
				Robot.setY_n();
		
			}
			else
				cout << "The robot reaches the limit" << endl;

		}
		else if (input == 'w')//s
		{
			if (Robot.getY() > 0)
				Robot.setY_s();
			else
				cout << "The robot reaches the limit" << endl;

		}
		else if (input == 'n')
		{
			if (Robot.getX() != 9)
				Robot.setX_e();
			else
				cout << "The robot reaches the limit\n";
		}
		else if (input == 's')
		{
			if (Robot.getX() > 0)
				Robot.setX_w();
			else
				cout << "The robot reaches the limit\n";
		}
		else if (input == 'W')
		{
			while (Robot.getY() != 0)
			{
				input = 'w';
				Robot.setY_s();
				cout << "Robot is moving\n";
			}

		}
		else if (input == 'E')
		{
			while (Robot.getY() != 9)
			{
				input = 'e';
				Robot.setY_n();
				cout << "Robot is moving\n";
			}

		}
		else if (input == 'N')
		{
			while (Robot.getX() != 9)
			{
				input = 'n';
				Robot.setX_e();
				cout << "Robot is moving\n";
			}
		}
		else if (input == 'S')
		{
			while (Robot.getX() != 0)
			{
				input = 's';
				Robot.setX_w();
				cout << "Robot is moving\n";
			}
		}
	}
}