#include <iostream>
#include <string>
using namespace std;
class School {
private:
	string first_name;
	string last_name;
	int Registration_number;
	char mobile_number[20];
	string gender;
	char cnic_number[20];
	char city[30];
	char country[30];
public:
	string f_na;
	string l_na;
	int id;
	string ge_nder;
	char mobile[20];
	char cnic[20];
	char ci[30];
	char cou[30];
	void show_city()
	{
		city[30] = ci[30];
	}
	void show_cou()
	{
		country[30] = cou[30];
	}
	void c_number()
	{
		cnic_number[20] = cnic[20];
	}
	void m_obile()
	{
		mobile_number[20] = mobile[20];
	}
	void g_ender()
	{
		gender = ge_nder;
	}
	void reg_detail()
	{
		Registration_number = id;
	}
	void name_detail()
	{
		first_name = f_na;
		last_name = l_na;
	}
	void show_id()
	{
		system("cls");
		cout << "\n \n \t \t THIS STUDENT RECORD HAS BEEN SAVED. ";
		cout << endl << endl;
	}
	void show_student()
	{
		system("cls");
		system("color 2");
		cout << "\n \n \t \t Registration Number : " << id;
		cout << "\n \n \t \t Name                : " << f_na << " " << l_na;
		cout << "\n \n \t \t CNIC Number         : " << cnic;
		cout << "\n \n \t \t Mobile Number       : " << mobile;
		cout << "\n \n \t \t Gender              : " << ge_nder;
		cout << "\n \n \t \t Address             : " << ci << " " << cou;
		cout << endl << endl;
	}
};
int main()
{
	School data[20];
	int press, check;
	char ch = 'y';
	while (ch != 'n')
	{
		system("color E");
		system("cls");
		cout << "\n \n \n\t**************************************************************\n";
		cout << "\t**                                                          **\n";
		cout << "\t**            STUDENT DATABASE MANAGEMENT SYSTEM            **\n";
		cout << "\t**                                                          **\n";
		cout << "\t**************************************************************\n";
		cout << "\n \n \t \t \t \t \t MAIN MENU ";
		cout << "\n \n \t \t \t \t Press 1:\t ADD STUDENT ";
		cout << "\n \n \t \t \t \t Press 2:\t SEARCH STUDENT ";
		cout << "\n \n \t \t \t \t Press 3:\t SHOW STUDENT ";
		cout << "\n \n \t \t \t \t Press 4:\t DELETE STUDENT ";
		cout << "\n \t \t ======> ";
		cin >> press;
		switch (press)
		{
		case 1:
		{
			system("cls");
			system("color D");
			cout << "\n \n \t \t \t ADD STUDENT \n \n";
			for (int i = 0; i < 20; i++)
			{
				cout << "\n \n \t \t Enter " << i + 1 << " Student ID : ";
				cin >> data[i].id;
				cout << "\n \t \t Enter Your First Name : ";
				cin >> data[i].f_na;
				cout << "\n \t \t Enter Your Last Name : ";
				cin >> data[i].l_na;
				cout << "\n \t \t Enter CNIC Number : ";
				cin >> data[i].cnic;
				cout << "\n \t \t Enter Mobile Number : ";
				cin >> data[i].mobile;
				cout << "\n \t \t Enter Your Gender ";
				cout << "\n \t \t  Male \t \t \t Female \n";
				cout << "\n \t \t * ============ > ";
				cin >> data[i].ge_nder;
				cout << "\n \t \t Enter Your City : ";
				cin >> data[i].ci;
				cout << "\n \t \t Enter Your Country : ";
				cin >> data[i].cou;
				
				system("cls");
				char another;
				cout << "\n \n \t \t Are You Want To Create Another Data (y/n) ";
				cin >> another;
				if (another == 'n')
				{
					break;
				}
		}

		}
		break;
		case 2:
		{
			int f = 1;
			system("cls");
			system("color 3");
			cout << "\n \n \t \t \t SEARCH STUDENT \n \n";
			cout << "\n \n \t \t ENTER STUDENT ID : ";
			cin >> check;
			for (int i = 0; i < 20; i++)
			{
				if (check == data[i].id)
				{
					data[i].show_id();
					f = 0;
				}
			}
			if (f == 1)
			{
				cout << "\n \n \t THIS STUDENT RECORD DOESN'T EXIST. \n ";
			}
		}
		break;
		case 3:
		{
			int flag;
			system("cls");
			system("color 7");
			cout << " \n \n \t \t \t SHOW STUDENT RECORD ";
			cout << "\n \n \t \t Enter Student ID : ";
			cin >> check;
			for (int i = 0; i < 20; i++)
			{
				if (check == data[i].id)
				{
					data[i].show_student();
					flag = 0;
				}
			}
			if (flag == 1)
			{
				cout << "\n \n \t THIS STUDENT RECORD DOESN'T EXIST. \n ";
			}
		}
		break;
		case 4:
		{
			system("cls");
			system("color 5");
			cout << " \n \n \t \t DELETE STUDENT ";
			cout << "\n \n \t Enter Student ID : ";
			cin >> check;
			for (int i = 0; i < 20; i++)
			{
				if (check == data[i].id)
				{
					cout << "\n \n \t \t  Name : " << data[i].f_na << " " << data[i].l_na << endl;
					cout << "\n \n \t \t Are Yout Want To Delete This Student : ";
					cout << "\n \t \t Press y :\t Yes ";
					cout << "\n \t \t Press n :\t No ";
					cin >> ch;
					if (ch == 'y')
					{
						cout << "\n \n \t \t THIS STUDENT RECORD HAS BEEN DELETE. \n";
						int num = 0;
						char del = '0';
						string dele = "0";
						data[i].f_na = dele;
						data[i].l_na = dele;
						data[i].id = num;
					}
					else if (ch == 'n')
					{
						cout << "\n \n \t \t RECORD IS RESERVED. \n ";
					}
				}
			}
		}
		break;
		default:
		{
			system("cls");
			cout << "\n \n \t \t PRESS INVALID KEY !!! \n ";
		}
		}
		cout << "\n \t \t Press y: MAINMENU ";
		cout << "\n \t \t Press n: Exit Program ";
		cin >> ch;
	}
	system("pause");
	return 0;
}
