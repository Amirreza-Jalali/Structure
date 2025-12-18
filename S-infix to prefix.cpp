#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;

bool os(char x) {
switch (x) {
   case '+':
   case '-':
   case '/':
   case '*':
	 return true;
}
     return false;
}

string pre(string pre_e) 
{

stack<string> s;

int length = pre_e.size();

for (int i = length - 1; i >= 0; i--) 
{
	if (os(pre_e[i])) {
	string s1 = s.top(); s.pop();
	string s2 = s.top(); s.pop();
	string temp = "(" + s1 + pre_e[i] + s2 + ")";

	s.push(temp);
	}

	else {
	s.push(string(1, pre_e[i]));
	}
}
return s.top();
}

int main() {

string pre_e = "*-A/BC-/AKL";
cout << "infix : " << pre(pre_e);

return 0;
}

