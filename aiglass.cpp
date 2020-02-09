#include<iostream>
using namespace std;

int main()
{
	int limX = 8, limY = 5, limZ = 3;
	int x = 8, y = 0, z = 0;
	int a,b,c;
	for(int i = 0; i < 2; i++)
	{
	// Minus water from x
	if((x - (limY - y)) >= 0)
	{
		a = x - (x - (limY - y));
		y += a; // Add Required water
		x -= a;
	}
	else
	{
		y += x;
		x = 0;
	}
	
	if((y - (limZ - z)) >= 0)
	{
		b = y - (y - (limZ - z));
		z += b;
		y -= b;
	}
	else
	{
		z += y;
		y = 0;
	}
	
	if((z - (limX - x)) >= 0)
	{
		c = z - (z - (limX - x));
		x += c;	
		z -= c;
	}
	else
	{
		x += z;
		z = 0;
	}
	if(i>0)
	{
		break;
	}
	else
	{
		
	z = y;
	y = 0;
	}
		
	}
	
	cout<<x<<y<<z;
}
