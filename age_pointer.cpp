#include <iostream>

using namespace std; 

int main()
{

	int *pointer(0);
	pointer = new int;

	cout << "How old are you ? ";
	cin >> *pointer;						


	cout << "Vous avez " << *pointer << " ans !" << endl;

	delete pointer;
	pointer = 0;

	return 0;
}