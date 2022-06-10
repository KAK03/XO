#include <iostream>
#include <string>

using namespace std;

const int Weight = 3, Height = 3;

class Field
{
public:
	Field(const int a, const int b)
	{
		
	}
};

class Gamefield :public Field
{
public:


};

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "\t\t�������:\n1) ������ ����� �� �������\n2) ����� ������� ������� ����� ������ ���� ���� �������\n3) ������ �� ��� ������� ������ ������\n4) ������� ���, ��� ������ ��� �� 3-� ���������� ��������\n\n";
	
	//Field g(Height, Weight);
	
	int nom = 0;
	int pole[Height][Weight];
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < Weight; j++)
		{
			nom++;
			pole[i][j] = nom;
			cout << pole[i][j] << "\t";
		}
		cout << endl;
	}

	int x,y=1;
	char symbol[Height][Weight];
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < Weight; j++)
		{
			symbol[i][j] = ' ';
		}
		
	}
	
	while (y <10)
	{
		if (y % 2 == 1)
		{
			cout << "\n����� ������ ����� (��������):";
			cin >> x;

			if (x < 1 || x>9)
			{
				return 0;
			}

			for (int i = 0; i < Height; i++)
			{
				for (int j = 0; j < Weight; j++)
				{
					if (x == pole[i][j])
					{
						if (symbol[i][j] != ' ')
						{
							cout << "��� ������ ��� ������, �������� ������:";
							cin >> x;
						}
					}
				}
			}			
			
			for (int i = 0; i < Height; i++)
			{
				for (int j = 0; j < Weight; j++)
				{
					if (x == pole[i][j])
					{
						symbol[i][j] = 'X';
					}
					cout << symbol[i][j] << "\t";
				}
				cout << endl;
			}
			y++;
			if (y - 4 >= 1)
			{
				if (symbol[0][0] & symbol[0][1] & symbol[0][2] == 'X' || symbol[1][0] & symbol[1][1] & symbol[1][2] == 'X' || symbol[2][0] & symbol[2][1] & symbol[2][2] == 'X' || symbol[0][0] & symbol[1][1] & symbol[2][2] == 'X' || symbol[0][2] & symbol[1][1] & symbol[2][0] == 'X'|| symbol[0][0] & symbol[1][0] & symbol[2][0] == 'X'|| symbol[0][1] & symbol[1][1] & symbol[2][1] == 'X'|| symbol[0][2] & symbol[1][2] & symbol[2][2] == 'X')
					{
						cout << "������� ������ �����";
						return 0;
					}				
			}
			
		}
		else
		{
			cout << "\n����� ������ ����� (������):";
			cin >> x;
			if (x < 1 || x>9)
			{
				return 0;
			}

			for (int i = 0; i < Height; i++)
			{
				for (int j = 0; j < Weight; j++)
				{
					if (x == pole[i][j])
					{
						if (symbol[i][j] != ' ')
						{
							cout << "��� ������ ��� ������, �������� ������:";
							cin >> x;
						}
					}
				}
			}

			for (int i = 0; i < Height; i++)
			{
				for (int j = 0; j < Weight; j++)
				{
					if (x == pole[i][j])
					{
						symbol[i][j] = 'O';
					}
					cout << symbol[i][j] << "\t";
				}
				cout << endl;
			}
			
			if (y - 5 >= 1)
			{
				if (symbol[0][0] & symbol[0][1] & symbol[0][2] == 'O' || symbol[1][0] & symbol[1][1] & symbol[1][2] == 'O' || symbol[2][0] & symbol[2][1] & symbol[2][2] == 'O' || symbol[0][0] & symbol[1][1] & symbol[2][2] == 'O' || symbol[0][2] & symbol[1][1] & symbol[2][0] == 'O' || symbol[0][0] & symbol[1][0] & symbol[2][0] == 'O' || symbol[0][1] & symbol[1][1] & symbol[2][1] == 'O' || symbol[0][2] & symbol[1][2] & symbol[2][2] == 'O')
					{
						cout << "������� ������ �����";
						return 0;
					}
			}
			y++;
		}
	}
}