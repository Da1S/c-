#include<iostream>
#include<cmath>

using namespace std;

struct Cartesian_coordinate_system{
	int x;
	int y;
};

struct Polar_coordinate_system{
	double distance_to_0;
	double alpha;
};

double Calculation_of_the_angle(int x, int y) {
	double alpha, Party_a, Party_b, rad = 0;
	Party_b = sqrt(pow(0, 2) + pow(y, 2));
	Party_a = sqrt(pow(x, 2) + pow(0, 2));
	const double pi = 3.1415926535897932384626433832795;

	if (y >= 0) {
		rad = tan(Party_b / Party_a);
		cout << "tan" << endl;
	}
	else if (y < 0) {
		rad = cos(Party_b / Party_a) / sin(Party_b / Party_a);
		cout << "ctan" << endl;
	}

	alpha = 180 / pi * rad;
	return alpha;
}

double distance_to_0(int x, int y) {
	double distance;
	distance = sqrt(pow(x, 2) + pow(y, 2));
	return distance;
}

int main() {
	int x, y;
	Polar_coordinate_system a;
	cout << "Enter x y: ";
	cin >> x >> y;
	cout << endl;
	Cartesian_coordinate_system b = { x, y };

	a = { distance_to_0(b.x, b.y), Calculation_of_the_angle(b.x, b.y)};

	cout  << "angle = " << a.alpha << " | " << "Distance to 0 = " << a.distance_to_0 << endl;


	system("pause");
	return 0;
}