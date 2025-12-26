#include <iostream>
using namespace std;
class clsperson {
private:
	int _id;
	string _firstname;
	string _lastname;
	string _gmail;
	string _phone;
public:

	clsperson(int id, string firstname, string lastname, string gmail, string phone) {
		_id = id;
		_firstname = firstname;
		_lastname = lastname;
		_gmail = gmail;
		_phone = phone;
	}
	int getid() {
		return _id;
	}
	void setfirst(string firstname) {
		_firstname = firstname;
	}
	string getfirst() {
		return _firstname;
	}
	void setlast(string lastname) {
		_lastname = lastname;
	}
	string getlast() {
		return _lastname;
	}
	void setgmail(string gmail) {
		_gmail = gmail;
	}
	string getgmail() {
		return _gmail;
	}
	void setphone(string phone) {
		_phone = phone;
	}
	string getphone() {
		return _phone;
	}
	string fullname() {
		return _firstname + " " + _lastname;
	}
	void print() {
		cout << "\ninfo:" << endl;
		cout << "\n_____________________\n";
		cout << "id           :" << getid() << endl;
		cout << "first Name   :" << getfirst() << endl;
		cout << "last Name    :" << getlast() << endl;
		cout << "full name    :" << fullname() << endl;
		cout << "Email        :" << getgmail() << endl;
		cout << "phone        :" << getphone() << endl;
		cout << "_______________________\n";

	}
	void sendemail(string subject, string body) {
		cout << "\nthe following massege sent successfully to email:" << getgmail() << endl;
		cout << "subject:" << subject << endl;
		cout << "body:" << body << endl << endl;
	}
	void sendsms(string mess) {
		cout << "\nthe following sms sent seccessfully to phone : " << getphone() << endl;
		cout << mess << endl;
	}

};
class clsemployee :public clsperson {
	string _title;
	int _salary;
	int _dep;
public:
	clsemployee(int id, string firstname, string lastname, string email, string phone,string title,int dep,int salary)
		:clsperson(id, firstname, lastname, email, phone)
	{
		_title = title;
		_dep = dep;
		_salary = salary;
	}
	void settitle(string title) {
		_title = title;
	}
	string gettitle() {
		return _title;
	}

	void setsalary(int salary) {
		_salary = salary;
	}
	int getsalar() {
		return _salary;
	}
	void setdep(int dep) {
		_dep = dep;
	}
	int getdep() {
		return _dep;
	}
	//overriding
	void print() {
		clsperson::print();
		cout << "title        :" << _title << endl;
		cout << "department   :" << _dep << endl;
		cout << "salary       :" << _salary << endl;
	}

};
class clspro :public clsemployee{
private:
	string _mainprolan;
public:
	clspro(int id, string firstname, string lastname, string email, string phone, string title, int dep, int salary, string main) :
		clsemployee(id, firstname, lastname, email, phone, title, dep, salary) {
		_mainprolan = main;
	}
	void setmain(string main) {
		_mainprolan = main;
	}
	string getmain() {
		return _mainprolan;
	}
	void print() {
		clsemployee::print();
		cout << "\nmain programming languge:" << _mainprolan << endl;

	}

	
};
int main()
{
	clspro pro();
	/*clsemployee employee(10, "lemar", "zubaide", "a@a.gmail", "4511346452", "zeta", 5, 1000);
	employee.print();*/

	/*clsperson person1(10, "lemar", "zubaide", "lemar@gmail.com", "0595618786");
	person1.print();
	person1.sendemail("hi", "how are you?");
	person1.sendsms("how are you?");*/
	system("pause>0");
	return 0;
}
