#ifndef TRANSROT_H
#define TRANSROT_H
#include <iostream>
#include <cmath>
#include <string>

#define PI 3.14159265

using namespace std;

class TransRot
{
	public:
		TransRot();
		
		void setXYZ(double ,double ,double);
		
		void setX(double);
		
		void setY(double);
		
		void setZ(double);
		
		double getX();
		
		double getY();
		
		double getZ(void);
		
		void translateAlongX(double);
		
		void translateAlongY(double);
		
		void translateAlongZ(double);
		
		void rotateAroundX(double);
		
		void rotateAroundY(double);
		
		void rotateAroundZ(double);
		
		void printResult();
		
		double getRadianFromDegree(double);
		
		string getOperationType();
		
		void updateCoordinates();
		
	private:
		double x,y,z,newX,newY,newZ;
		string opType;
};

#endif
