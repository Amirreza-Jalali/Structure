#include "/Users/apple/Desktop/computer/bits.cpp"

using namespace std;

bool balanced(string s1)
{
	stack<char> s;

	char x;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == '(' || s1[i] == '['
			|| s1[i] == '{')
		{
			s.push(s1[i]);
			continue;
		}		
		if (s.empty())
			return false;

		switch (s1[i]) {
		case ')':
			
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	return (s.empty());
}

int main()
{
	string s1 = "{()}[]";

	if (balanced(s1))
		cout << "balanced"<<"\n";
	else
		cout << "is not balanced"<<"\n";
        cout<<"\n";
	return 0;
}

