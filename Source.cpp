#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int made_array(int* s, int* t, int num_rep);
int show_array(int* s, int* t, int num_rep);
int finding_answer(int* s, int* t, int num_rep);

int main()
{
	int num_rep;

	cout << "Enter num. of rep.: ";
	cin >> num_rep;

	int* s = new int[num_rep];
	int* t = new int[num_rep];

	made_array(s, t, num_rep);
	system("cls");
	show_array(s, t, num_rep);
	finding_answer(s, t, num_rep);
	
	delete [] s;
	delete [] t;
	return 0;
}

int made_array(int* s, int* t, int num_rep)
{
	for (int i = 0; i < num_rep; i++)
	{
		cout << "Enter s: ";
		cin >> s[i];
		cout << "Enter t: ";
		cin >> t[i];
	}
	return 0;
}

int show_array(int *s, int *t, int num_rep)
{
	cout << "(s, t): ";
	for (int i = 0; i < num_rep; i++)
	{
		cout << "(" << s[i] << ", " << t[i] << "); ";
	}
	return 0;
}

int finding_answer (int *s, int *t, int num_rep)
{	
	int s_pros = 0, s_minus = 0;
	for (int i = 0; i < num_rep; i++)
	{
		if (s[i] > 6 && t[i] > 12)
		{
			s_pros++;
		}
		else
		{
			s_minus++;
		}
	}
	cout << endl << "Yes: " << s_pros;
	cout << endl << "No: " << s_minus;
	return 0;
}
