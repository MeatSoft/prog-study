#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	int i;
	for (i = 1000; i < 10000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = (i / 100) % 10;
		d = i / 1000;
		i = a + b + c + d;
		if (i > 10)
		{  
			if (i < 16)
			cout << i << endl;
		}
		else {
			i++;
		}
		return 0;
	}




}
// �������� ���������, ������� ���� ��� ������������� �����, ����� ���� ������� �� ������� ����� n, ��� 10 < n < 16
// ��� �� �����, ������ ������ �� ������� �����, ��������� � �����, �� ��������������...