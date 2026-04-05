#include <iostream>
using namespace std;

class MyStack
{
private:
	int* _arr;
	int _count;
public:
	MyStack()
	{
		_arr = new int[10000];
		_count = 0;
	}

	void Push(int n)
	{
		_arr[_count++] = n;
	}

	void Pop()
	{
		if (_count == 0)
		{
			cout << "-1\n";
			return;
		}

		cout << _arr[--_count] << '\n';
		return;
	}

	void Size()
	{
		cout << _count << '\n';
		return;
	}

	void Empty()
	{
		if (_count == 0)
		{
			cout << "1\n";
		}
		else cout << "0\n";
		return;
	}

	void Top()
	{
		if (_count == 0)
		{
			cout << "-1\n";
			return;
		}

		cout << _arr[_count - 1] << '\n';
		return;
	}
};


int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	MyStack stack;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int n;
			cin >> n;
			stack.Push(n);
		}
		else if (str == "pop")
		{
			stack.Pop();
		}
		else if (str == "size")
		{
			stack.Size();
		}
		else if (str == "empty")
		{
			stack.Empty();
		}
		else if (str == "top")
		{
			stack.Top();
		}
	}
	

	return 0;
}
