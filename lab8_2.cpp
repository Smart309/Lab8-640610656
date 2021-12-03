//Dialog of the first example is given below.

/*
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
using namespace std;

int GearNo(int x){
    x = x - 120000000 ;
    x = x/10000000 ;
    return x ;
}

int main(){
    string name , movie , sum1 , sum2 ;
    int myid ;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" ;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n" ;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" ;
    cout << name << ": ";
    cin >> myid;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << GearNo(myid) << ". I have a free movie ticket for you.\n" ;
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,sum1);
    cout << "Fahsai: " << sum1 << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,sum2);
    cout << "Fahsai: 555+ see you " << sum1 << ". Bye Bye " << "\\" "(^ ^)/";

    return 0 ;
}