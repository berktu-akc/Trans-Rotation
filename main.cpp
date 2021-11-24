#include <iostream>
#include <cmath>
#include <string>

#include "TransRot.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	TransRot p1,p2;
	
	p1.setXYZ(3,4,5);
	cout << p1.getX() << endl;
	p1.translateAlongY(10);
	p1.printResult();
	p1.rotateAroundZ(90);
	p1.printResult();
	
	p2.setX(20);
	p2.setY(15);
	p2.setZ(50);
	p2.rotateAroundZ(135);
	p2.printResult();
	p2.updateCoordinates();
	p2.translateAlongZ(-20);
	p2.printResult();
	
	return 0;
}
