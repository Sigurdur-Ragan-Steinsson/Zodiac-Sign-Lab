#include <iostream>

using namespace std;

int main() {
  int month;
  float date, day;
  cout << "Please enter month as a number" << endl;
  cin >> month;
  cout << "Please enter day as a number" << endl;
  cin >> day;
  if ((month > 0) && (month < 13) && (day > 0) && (day < 32)){

    if ((month == 2) && (day > 29)){
     return 0;
    }

    else {
      day = day / 100;
      date = month + day;

      if ((date >= 1.20) && (date <= 2.18)){
        cout << "You are an Aquarius" << endl;
      }

      if ((date >= 2.19) && (date <= 3.20)){
        cout << "You are a Pisces" << endl;
      }

      if ((date >= 3.21) && (date <= 4.19)){
        cout << "You are a Aries" << endl;
      }

      if ((date >= 4.20) && (date <= 5.20)){
        cout << "You are a Taurus" << endl;
      }

      if ((date >= 5.21) && (date <= 6.20)){
        cout << "You are a Gemini" << endl;
      }

      if ((date >= 6.21) && (date <= 7.22)){
        cout << "You are a Cancer" << endl;
      }

      if ((date >= 7.23) && (date <= 8.22)){
        cout << "You are a Leo" << endl;
      }

      if ((date >= 8.23) && (date <= 9.22)){
        cout << "You are a Virgo" << endl;
      }

      if ((date >= 9.23) && (date <= 10.22)){
        cout << "You are a Libra" << endl;
      }

      if ((date >= 10.23) && (date <= 11.21)){
        cout << "You are a Scorpio" << endl;
      }

      if ((date >= 11.22) && (date <= 12.21)){
        cout << "You are a Sagittarius" << endl;
      }

      if (date >= 12.22){
        cout << "You are a Capricorn" << endl;
      }
    }
  }
  else
    return 0;
}

