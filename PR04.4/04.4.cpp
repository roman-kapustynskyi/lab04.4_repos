#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double y,x, R, xp, xk, dx ;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "y" << "        |" << endl;
	cout << "----------------------------" << endl;
	x = xp;
	while (x <= xk)
	{

		if (x <= -1 - R)
			y = -(x + 1 + R);
		else
			if (-1 - R < x && -1 >= x)
				y = sqrt(pow(R, 2) - pow(x + 1, 2));
			else
				if (-1 < x && x <= 1)
					y = R;
				else
					if (x > 1 && x <= 2)
						y = R + (x - 1) * (-1 - R);
					else
						y = -1;

		cout << "|" << setw(7) << setprecision(2) << x
			<< "    |" << setw(9) << setprecision(3) << y
			<< "     |" << endl;
		x += dx;
	}
	cout << "----------------------------" << endl;
	return 0;









}