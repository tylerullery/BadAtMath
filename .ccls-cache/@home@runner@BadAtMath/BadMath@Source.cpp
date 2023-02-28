#include <iostream>
#include <iomanip>

using namespace std;

float average(int i1, int i2, int i3)
{
	// Fix the order of operations by adding parentheses to ensure the division is done after the addition.
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // Fix variable name, n2 should be n3.

	float a = average(n1, n2, n3);

	cout << fixed << setprecision(1) << "The average is " << a << endl; // Reorder modifiers to set precision first.

	return 0;
}
