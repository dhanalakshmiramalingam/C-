#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class PalindromeChecker{
	public:
		bool isPalindrome(const string & str){
			string revstr=str;
			reverse(revstr.begin(),revstr.end());
			return str==revstr;
		}
		void getinput(){
		      string input;
              cout << "Enter a string: ";
              cin>>input;

              if (isPalindrome(input)) {
                cout << "The string is a palindrome." << endl;
              }   
              else {
                cout << "The string is not a palindrome." << endl;
               }
        }

};
int main(){
	PalindromeChecker checker;
	checker.getinput();
	return 0;
	
}
