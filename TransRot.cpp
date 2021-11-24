#include "TransRot.h"
#include <iostream>
#include <string>
#include <cmath>

#define PI 3.14159265

using namespace std;

TransRot::TransRot()
{
	setXYZ(0,0,0);
}

void TransRot::setXYZ(double a,double b,double c)
{
	setX(a);
	setY(b);
	setZ(c);
}
		
void TransRot::setX(double a)
{
	x=a;
}
void TransRot::setY(double a)
{
	y=a;
}
void TransRot::setZ(double a)
{
	z=a;
}
	
double TransRot::getX(void)
{
	return x;
}
		
double TransRot::getY(void)
{
	return y;
}
	
double TransRot::getZ(void)
{
	return z;
}
		
void TransRot::translateAlongX(double value)
{
	newX=getX()+value;
	newY=getY();
	newZ=getZ();
	opType="Translate X";
}
		
void TransRot::translateAlongY(double value)
{
	newX=getX();
	newY=getY()+value;
	newZ=getZ();
	opType="Translate Y";
}
		
void TransRot::translateAlongZ(double value)
{
	newX=getX();
	newY=getZ();
	newZ=getY()+value;
	opType="Translate Y";
}
		
void TransRot::rotateAroundX(double value)
{
	newX=getX()*1;
	newY=getY()*cos(getRadianFromDegree(value))-getZ()*(sin(getRadianFromDegree(value)));
	newZ=getY()*sin(getRadianFromDegree(value))+getZ()*cos(getRadianFromDegree(value));
	opType="Rotate X";
}
		
void TransRot::rotateAroundY(double value)
{
	newX=getX()*cos(getRadianFromDegree(value))+getZ()*sin(getRadianFromDegree(value));
	newY=getY()*1;
	newZ=getX()*(-1*sin(getRadianFromDegree(value)))+getZ()*cos(getRadianFromDegree(value));
	opType="Rotate Y";
}
		
void TransRot::rotateAroundZ(double value)
{
	newX=getX()*cos(getRadianFromDegree(value))-getY()*(sin(getRadianFromDegree(value)));
	newY=getY()*cos(getRadianFromDegree(value))+getX()*sin(getRadianFromDegree(value));
	newZ=getZ()*1;
	opType="Rotate Z";
}
		
void TransRot::printResult(void)
{
	cout <<"P("<<getX()<<","<<getY()<<","<<getZ()<<") ====="<<getOperationType()<<"======> P("<<newX<<","<<newY<<","<<newZ<<")"<<endl;
}
	
double TransRot::getRadianFromDegree(double value)
{
	return value*(PI/180);
}
	
string TransRot::getOperationType(void)
{
	return opType;
}
		
void TransRot::updateCoordinates(void)
{
	setX(newX);
	setY(newY);
	setZ(newZ);
}
