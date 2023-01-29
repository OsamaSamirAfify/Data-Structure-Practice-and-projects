#include<iostream>
#include<string>

using namespace std;


class New_User{
private:
    string name, phone_number;
    int days;

public:
    // this is a condtructor which takes at least one value, depends on the needs of class
    New_User(string n){
        name = n;
        phone_number = "No_Phone";
        days = 0;
    }
    // we can create more that one constructor but with different number of inputs.
    // this is a constructo should be same name of class which takes all possible values
    New_User(string n, string p, int d){
        name = n;
        phone_number = p;
        days= d;
    }

    void print(){
        cout<<endl<< name<< endl;
        cout<<phone_number<< endl;
        cout<<days<<endl<<endl;
    }
};

int main(){
    New_User Osama("Osama Samir Afify");
    New_User Osos("Osama Samir Afify", "+201066004227", 40);
    Osos.print();
    Osama.print();
}
