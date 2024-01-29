#include <iostream>
#include <string>
using namespace std;

class Username {
  private:
    string username;
    
  public:
    void get() {
      cout << "Enter a username: ";
      cin>>username;
    }
    
    int isValid() {
      int valid = 1;
      
      if(username.length() < 6) {
        valid = 0; 
      }
    
      for(int i=0; i<username.length(); i++) {
        if(!(isalpha(username[i]) || isdigit(username[i]))) {
          valid = 0;
          break;
        }  
      }
      return valid;
    }
};

int main() {
  Username user;  
  user.get();
  
  if(user.isValid()) { 
    cout << "Valid username" << endl;
  } else {
    cout << "Invalid username" << endl;  
  }

  return 0;
}
