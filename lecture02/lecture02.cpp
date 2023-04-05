#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <random>
#include <iomanip>
#include <math.h>
using namespace std;

//string
/*int main() {
	string str;
	str = "abc";
	str += "d";
	cout << str.substr(1,2)<< endl;
	cout << str.length() << endl;
	cout << str.find("a") << endl;
	for (int i = 0; i < str.length(); i++) {
		cout << str.at(i) << endl;
	}
	for (int i = str.length() - 1; i >= 0; i--) {
		cout << str.at(i) << endl;
	}
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}
*/

//charcter
/*bool isDigitString(string str) {
	if (str.length() == 0) return false;
	for (int i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) return false;
	}
	return true;

}
int main() {
	string str = "123";
	cout << isDigitString(str) << endl;;
	return 0;
}
*/

/*void convertToUpper(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!isupper(str.at(i))) str[i] = toupper(str.at(i));
	}
	cout << str << endl;
}
int main() {
	string str;
	cin >> str;
	convertToUpper(str);
	return 0;
}
*/

/*bool isPalindrome(string str) {
	int n = str.length() / 2;
	for (int i = 0; i <= n; i++) {
		if (str[i] != str[str.length() - i-1]) return false;
	}
	return true;
}*/
/*bool isPalindrome(string str) {
	return str == reverse(str);
}*/
/*int main() {
	string str;
	cin >> str;
	cout << isPalindrome(str) << endl;;
	return 0;
}*/

//exercise

//01
/*bool isendsWith(string str, string suffix) {
	if (str.length() != suffix.length()) return false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != suffix[i])return false;
	}
	return true;
}
int main() {
	string str, suffix;
	cin >> str >> suffix;
	cout << isendsWith(str, suffix) << endl;
	
	return 0;
}
*/
//02
/*void deleteWhitespace(string str) {
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;
}
int main() {
	string str;
	getline(cin, str);
	deleteWhitespace(str);
	return 0;
}
*/
//exercise
//01
/*#define M_PI 3.14159265358979323846    
int main() {
	double numRad;
	double angle = -90;
	cout << left<<setw(3)<<"theta" << "  |  " << "sin(theta)" << "  |  " <<"cos(theta)"<< endl;
	cout << "----------------------------------------" << endl;
	while (angle <= 90) {
		numRad = angle * M_PI / 180;
		cout <<right<<setw(3)<<setprecision(0)<< angle << "  |  "<< fixed << setprecision(8) << right << setw(3) << sin(numRad) << "  |  " << cos(numRad) <<" | " << endl;
		angle += 15;
	}
	return 0;
}
*/
//02




