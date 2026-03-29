#include <iostream>
using namespace std;

class clsCalculator {
private:
	float _lastnumber=0;
	float  _result=0;
	float _preresult = 0;
	string _lastop = "Clear";
	bool _iszeroo(float num) {
		return (num==0);
	}
public:

	void Add(float  num) {
		_lastnumber = num;
		_preresult = _result;
		_result += num;
		_lastop = "Adding";
	
	}
	void Subtract(int num) {
		_lastnumber = num;
		_preresult = _result;
		_result -= num;
		_lastop = "Subtracting";
	}
	void Divid(int num) {
		_lastnumber = num;
		if (_iszeroo(num)) {
			num = 1;
		}
		_preresult = _result;
		_result /= num;
		_lastop = "Dividing";
	}
	void Multiply(int num) {
		_lastnumber = num;
		_preresult = _result;
		_result *= num;
		_lastop = "Multipling";
	}
	float Getfinalresult() {
		return _result;
	}
	void Clear() {
		_lastnumber = 0;
		_lastop;
		_preresult = 0;
		_result = 0;
	}
	void Cancellastop() {
		_lastnumber = 0;
		_lastop = "Cancelling Last Operation";
		_result = _preresult;
	}
	void PrintResult() {
		cout << "Result ";
		cout << "After " << _lastop <<  _lastnumber << " is: " << _result;
		cout << endl;
	}

};


int main()
{
	clsCalculator Calaculator1;
	Calaculator1.Add(10);
	Calaculator1.PrintResult();
	Calaculator1.Add(100);
	Calaculator1.PrintResult();
	Calaculator1.Subtract(20);
	Calaculator1.PrintResult();
	Calaculator1.Divid(0);
	Calaculator1.PrintResult();
	Calaculator1.Divid(2);
	Calaculator1.PrintResult();
	Calaculator1.Multiply(3);
	Calaculator1.PrintResult();
	Calaculator1.Cancellastop();
	Calaculator1.PrintResult();
	Calaculator1.Clear();
	Calaculator1.PrintResult();



}

