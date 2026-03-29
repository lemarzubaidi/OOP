
#include <iostream>
using namespace std;
class clspersone {
private:
    int _id;
    string _firstname;
    string _lastname;
    string _email;
    string _phone;
public:
    clspersone(int id,string Fname,string Lname,string email,string PH)
    {
        _id = id;
        _firstname = Fname;
        _lastname = Lname;
        _email = email;
        _phone = PH;
    }
    void setFname(string Fname) {
        _firstname = Fname;
   }
    string getFname() {
        return _firstname;
    }
    void setLname(string Lname) {
        _lastname = Lname;
    }
    string getLname() {
        return _lastname;
    }
    void setemail(string ema) {
        _email = ema;
    }
    string getemail() {
        return _email;
    }
    void setphone(string phone) {
        _phone = phone;
    }
    string getphone() {
        return _phone;
    }
    int getid() {
        return _id;
    }
    string FullName() {
        return _firstname + " " + _lastname;
    }
    void Print() {
        cout << "Info:\n";
        cout << "______________________\n";
        cout << "ID           :" << _id << endl;
        cout << "FirstName    :" << _firstname<<endl;
        cout << "LastName     :" << _lastname<<endl;
        cout << "Full Name    :" << FullName() << endl;
        cout << "Email        :" << _email << endl;
        cout << "Phone        :" << _phone << endl;
        cout << "_______________________\n";
    }

    void SendEmail(string subject,string Body) {
        cout << "The following messege sent successfully to email:" << _email << endl;
        cout << "Subject:" << subject<<endl;
        cout << "Body:" << Body << endl << endl;
    }
    void SendSMS(string mess) {
        cout << "The following SMS sent successfully to phone:" << _phone << endl;
        cout << mess;
    }



 };

int main()
{
    clspersone person1(10,"Lemar","Zubaidi","Lemar@gmail.com","0598718090");
    person1.Print();
    person1.SendEmail("Hi", "How are you?");
    person1.SendSMS("How are you?");
}
