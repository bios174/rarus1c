#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //����������� �������� ����� � �������
	int i=0, k=0; //���������� ��������
	char string[1000]; //������� � �������� ������� ��� �� ������ �� 1000 ��������
	cout << "������� ��������� � �������� ��������"<< endl; //����� ��������� �� �����
	cin >> string;//���������� ������ � ���������
	for (i = 0; string[i]; i++) //���� ������ ������ �� ��������
	{
		if (string[i] == '(')//��������� �������� ����� ������ "("
			k++;
		if (string[i] == ')')//��������� �������� ����� ������ ")"
			k--;
	}
	if (k == 0)
		cout << "������ ��������� ������� �����"<<endl;
	else
		cout << "������ ��������� ������� �� �����"<<endl;
	

	system("pause");
	return 0;
}