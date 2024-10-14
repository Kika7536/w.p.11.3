#include<iostream>
#include<cassert>

using namespace std;

float travelTime(float distance, float speed) {

	assert(distance > 0);
	assert(speed > 0);

	return distance / speed;

}

void main() {
	float distance, speed;

	cout << "Input distance: ";
	cin >> distance;

	cout << "Input speed: ";
	cin >> speed;

	cout << travelTime(distance, speed) << endl;

	main();

}