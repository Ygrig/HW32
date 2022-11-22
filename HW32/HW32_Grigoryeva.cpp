#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


template <typename T>
void double_pointer(T** dp, const int num1, const int num2) {
	//T** dp = new int * [num1];
	for (int i = 0; i < num1; i++)
		dp[i] = new int[num2];
}


void change_sym(string& str, char ch1, char ch2) {
	int pos = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ch1)
		{	pos = i;
			string newstr = str.replace(pos, 1,1, ch2);
			}
	}
}

struct route {
	int number{};
	string type{};
	string start{};
	string finish{};
	int price{};
};

void show_route(route &R) { 
	cout << "Number: " << R.number << '\n';
	cout << "Type: " << R.type << '\n';
	cout << "Start: " << R.start << '\n';
	cout << "Finish: " << R.finish << '\n';
	cout << "Ticketprice: " << R.price << '\n';
}

int total_price(route& R, int num) {
	return R.price * num;
}

int main() {

	int n, m,k;

	cout << "Task 32.1\n";
	cout << "Enter two numbers:\n";
	cin >> n >> m;
	int **p1= new int * [n];
	double_pointer(p1, n, m);
	cout << "\n";
	

	cout << "Task 32.2\n";
	string line;
	char sym1, sym2;
	cout << "Enter the initial line: ";
	cin >> line;
	cout<<'\n';
	
	cout << "Enter two symbols:\n";
	cin >> sym1 >> sym2;
	change_sym(line, sym1, sym2);
	cout << "There ia a new line: " <<line << '\n';
	cout << "\n";
	

	cout << "Task 32.3\n";
	route r1 = { 20, "bus", "ABC", "XYZ", 4 };
	route r2 = { 10, "tram", "ABC", "KLM",5 };
	route r3 = { 30, "trolley", "ABC" , "OPQ",3 };

	//Function that shows information:
	show_route(r2);
	cout << "\n";
	//Function that calculates total price for tickets:
	cout << "Enter number of persons:\n";
	cin >> k;
	cout << "Total price = " << total_price(r2, k);

	return 0;
}