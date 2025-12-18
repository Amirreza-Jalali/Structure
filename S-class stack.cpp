#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;
#define MAX 1000
class Stack {
	int top;
 public:
	int a[MAX];
	Stack() { top = -1; }
	bool push(int x);
	int pop();
    int sempty();
	bool isEmpty();
};
bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed\n";
		return true;
	}
}
int Stack::sempty()
{
    if (top < 0) {
        cout << "stack is empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
int Stack::pop()
{
	if (top < 0) {
		cout << "stack underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
bool Stack::isEmpty()
{
	return (top < 0);
}
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " pop"<<"\n";
	cout<<"elements  : "<<"    ";
	while(!s.isEmpty())
	{
    	cout<<s.sempty()<<"    ";
		s.pop();
	}
	return 0;
}


