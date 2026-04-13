#include "logic.h"

int main() {
	int classA[DEFAULT_SIZE];
	int classB[DEFAULT_SIZE];
	int classC[DEFAULT_SIZE];

	int size;

	cout << "Input size of classes: ";
	cin >> size;

	init_marks(classA, size);
	init_marks(classB, size);
	init_marks(classC, size);

	string best_class = find_best_class(classA, classB, classC, size)

}