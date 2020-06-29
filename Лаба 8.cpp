#include <iostream>
#include "Logger.h"

using namespace std;
float HypotenuseOfEgyptianTriangle(float a, float b)
{
	srand(time(NULL));
	int n = 1 + rand() % 2;
	return (pow((-1), n) * sqrt(a * a + b * b));
}
int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	cout << HypotenuseOfEgyptianTriangle(a, b) << endl;
	Logger().Write("Hypotenuse of egyptian triangle", "OK");
}


