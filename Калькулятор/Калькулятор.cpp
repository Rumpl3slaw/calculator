
#include <iostream>

using namespace std;


int main()
{
	char dalshe;
	do
	{		
		double x, y;
		int znak;
		cout << "Vvedit`2 chysla" << endl;
		cin >> x;
		cin >> y;

		cout << "Vyberit` znak" << endl <<
			"1.Dodavannya" << endl <<
			"2.Vidnimannya" << endl <<
			"3.Mnojennya" << endl <<
			"4.Dilennya" << endl;


		cout << "Vvedit` znak" << endl;
		cin >> znak;

		switch (znak)
		{
		case 1:
			cout << "x + y =" << x + y << endl;
			break;
		case 2:
			cout << "x - y =" << x - y << endl;
			break;
		case 3:
			cout << "x * y =" << x * y << endl;
			break;
		case 4:
			cout << "x / y =" << x / y << endl;
			break;
		}
		cout << "Prodovjyty?(y/n)" << endl;
		cin >> dalshe;
	} while (dalshe == 'y');
}



