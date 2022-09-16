#include <iostream>

using namespace std;

int main() {
	
	double score;
	double scoreSum = 0.0;
	double scoreAverage; 

	int count = 0; 

	const int PASS_AVERAGE_CUTOFF = 60; 
	
	cout << "Enter first exam score: "; 
	cin >> score;
	
	scoreSum = scoreSum + score;
	count = count + 1; 


	cout << "Enter second exam score: ";
	cin >> score; 

	scoreSum = scoreSum + score; 
	count = count + 1;

	cout << "Enter third exam score: ";
	cin >> score;
	
	scoreSum = scoreSum + score;
	count = count + 1; 

	scoreAverage = scoreSum / count;

	if (scoreAverage > PASS_AVERAGE_CUTOFF) {
		cout << "You Passed";
	}

	if (scoreAverage <= PASS_AVERAGE_CUTOFF) {
		cout << "You Failed";
		}



	return EXIT_SUCCESS;
}