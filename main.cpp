#include <iostream>
using namespace std;

int main() {
    
    int Money{};
    cout << "Enter an integar representing the number of pennies you have" << endl;
    cin >> Money ;
    cout << "You can provide change for this as follows: " << endl;
    
    int Dollars = Money / 100;
    cout << "dollars: " << Dollars << endl;
    
    Money = Money - (Dollars * 100) ;
    
    int FiftyPence = Money / 50;
    cout << "Fifty Pences: " << FiftyPence << endl;
    
    Money = Money - (FiftyPence * 50) ;
    
    int TwentyPence = Money / 20;
    cout << "Twenty Pences: " << TwentyPence << endl;
    
    Money = Money - (TwentyPence * 20) ;
  
    int TenPence = Money / 10;
    cout << "Ten Pences: " << TenPence << endl;
    
    Money = Money - (TenPence * 10);

    int FivePence = Money / 5;
    cout << "Five Pences: " << FivePence << endl;
    
    Money = Money - (FivePence * 5);

    int TwoPence = Money / 2;
    cout << "Two Pences: " << TwoPence << endl;
    
    Money = Money - (TwoPence * 2);
    
    cout << "Once Pences: " << Money << endl;
    
    return 0;
    
}

  