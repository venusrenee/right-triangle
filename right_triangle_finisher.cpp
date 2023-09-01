#include <iostream>
#include <math.h>

using namespace std;

struct Angle {
	float sine;
	float cosine;
	float tangent;
};

struct triangle {
	struct Angle ang1;
	struct Angle ang2;
	float side1;
	float side2;
	float hypotenuse;
};

void calculateAngles(triangle& t, float a, float b) {
    t.side1 = a;
    t.side2 = b;
    t.hypotenuse = sqrt(a * a + b * b);

    t.ang1.sine = a / t.hypotenuse;
    t.ang1.cosine = b / t.hypotenuse;
    t.ang1.tangent = a / b;

    t.ang2.sine = b / t.hypotenuse;
    t.ang2.cosine = a / t.hypotenuse;
    t.ang2.tangent = b / a;
}

int main() {
    float side1;
    float side2;
    cout << "Please enter the length of side 1: ";
    cin >> side1;
    cout << "Please enter the length of side 2: ";
    cin >> side2;
    
    triangle t;
    calculateAngles(t, side1, side2);

    cout << "The sine of angle1 is: " << t.ang1.sine << endl;
    cout << "The cosine of angle1 is: " << t.ang1.cosine << endl;
    cout << "The tangent of angle1 is: " << t.ang1.tangent << endl;
    cout << "The sine of angle2 is: " << t.ang2.sine << endl;
    cout << "The cosine of angle2 is: " << t.ang2.cosine << endl;
    cout << "The tangent of angle2 is: " << t.ang2.tangent << endl;

    return 0;
}