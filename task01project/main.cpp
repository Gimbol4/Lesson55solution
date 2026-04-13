#include "logic.h"

int main() {
	int classes[DEFAULT_SIZE][DEFAULT_SIZE];

	int number_of_classes;
	int number_of_students;


	cout << "Input number of classes: ";
	cin >> number_of_classes;

	cout << "Input number of students: ";
	cin >> number_of_students;

	init_marks(classes, number_of_classes, number_of_students);

	string best_class = find_best_class(classA, classB, classC, size);

	cout << convert(classes, number_of_classes, number_of_students) << endl;

	cout << "Best class is " << best_class << ".\n";

}