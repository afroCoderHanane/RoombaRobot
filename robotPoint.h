#pragma once
#include<iostream>
class RobotPoint
{
private:
	int x, y;
	char storLocation[10][10];//member variables
public:
	//prototypes
	RobotPoint();// default constructor
	//setters
	void setX_e();
	void setX_w();
	void setY_n();
	void setY_s();
	//getters 
	int getX();
	int getY();
	//method 
	void displayLocation();
	void setRobotEmpty();
	void RobotLocation();
	void setRobot();
	//destructor
	
	~RobotPoint();
};

