
#include <iostream>
using namespace std;
class clspersone {
	class clsadress {
	public:
		string adressline1;
		string adressline2;
		string city;
		string country;
		void Print() {
			cout << "\nAdress:\n";
			cout << adressline1 << endl;
			cout << adressline2 << endl;
			cout << city << endl;
			cout << country << endl;
		}
	};
public:
	string fullname;
	clsadress adress;
	clspersone() {
		fullname = "Lemar Zubaidi";
		adress.adressline1 = "Building 1";
		adress.adressline2 = "zita";
		adress.city = "Tulkarm";
		adress.country = "Palestine";
	}
};
int main()
{
	clspersone p1;
	p1.adress.Print();


}