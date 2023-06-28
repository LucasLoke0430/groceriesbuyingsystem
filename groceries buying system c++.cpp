#include <iostream>
#include <windows.h>
using namespace std;

void showMenu()//Menu
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,14);

	cout << " __________      __________    __________    ____________   ____________    __________    ___________     __" << endl;
	cout << "/\\  _____  \\    /\\  _______\\  /\\  ________\\  \\_\\___   ___\\ /\\  ________ \\  /\\  _______\\  / \\  _______ \\  /\\ \\ " << endl;
	cout << "\\ \\ \\____\\  \\__ \\ \\ \\______   \\ \\ \\________      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\ \\______   \\  \\ \\______\\ \\ \\ \\ \\ " << endl;
	cout << " \\ \\  _______  \\ \\ \\  _____\\   \\_\\_______  \\      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\  _____\\   \\ \\  _______  \\ \\ \\ \\ " << endl;
	cout << "  \\ \\ \\      \\  \\ \\ \\ \\                \\ \\  \\      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\ \\         \\ \\ \\     \\ \\ \\ \\ \\ \\ " << endl;
	cout << "   \\ \\ \\______\\  \\ \\ \\ \\________  ______\\_\\  \\      \\ \\  \\    \\ \\ \\______/ /  \\ \\ \\________ \\ \\ \\     \\ \\ \\ \\ \\ \\________ " << endl;
	cout << "    \\_\\___________\\ \\_\\_________\\ \\_\\_________\\      \\_\\__\\    \\_\\________/    \\_\\_________\\ \\_\\_\\     \\_\\_\\ \\_\\_________\\ " << endl;

	cout << "\n";
	cout << "Welcome to BestDeal Mall !!" << endl;
	cout << "\n";
	cout << "==========Menu==========" << endl;
	cout << "1. Product Details" << endl;
	cout << "2. Purchase Product" << endl;
	cout << "3. Delivery Charges Calculator" << endl;
	cout << "4. Exit" << endl;
	cout << "========================" << endl;
	cout << "\n";
}

int main()
{
	int option, number, n;
	int total = 0;
	float stotal;
	int price[4] = { 100,350,500,850 };
	int price1[4] = { 100,350,625,1133 };
	float km;
	float tax;
	int charges, charges1;
	char rpt, member, rpt1;

	do {
		showMenu();
		cout << "Please choose your options (1, 2, 3, 4): ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1://products details
		{
			int choice;

			cout << "\nPlease select your product to check the details." << endl;
			cout << "1. Wall Scrapper" << endl;
			cout << "2. Tiles Waxes" << endl;
			cout << "3. Mud/Tar Remover" << endl;
			cout << "4. Dry Blower" << endl;
			cout << "\n";
			cout << "Please choose your options (1, 2, 3, 4): ";
			cin >> choice;
			system("cls");
			switch (choice)
			{
			case 1:
				cout << "\nProduct Code: 101\nProduct Name: Wall Scrapper\nRetail Price: RM 100" << endl;
				goto end;
			case 2:
				cout << "\nProduct Code: 202\nProduct Name: Tiles Waxes\nRetail Price: RM 350" << endl;
				goto end;
			case 3:
				cout << "\nProduct Code: 303\nProduct Name: Mud/Tar Remover\nRetail Price: RM 500\nThe price includes a 20% special discount." << endl;
				goto end;
			case 4:
				cout << "\nProduct Code: 404\nProduct Name: Dry Blower\nRetail Price: RM 850\nThe price includes a 25% special discount." << endl;
				goto end;
			default:
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h,4);
				cout << "\n";
				cout << "I'm sorry, the product code you've entered is invalid." << endl;
				goto end;
			}
		}
		case 2://purchase products
		{
		retry:

			cout << "===========Product List=============== " << endl;
			cout << "1. Product Code (101): Wall Scrapper RM 100" << endl;
			cout << "2. Product Code (202): Tiles Waxes RM 350" << endl;
			cout << "3. Product Code (303): Tar Remover RM 625 (Member Price: RM 500)" << endl;
			cout << "4. Product Code (404): Dry Blower RM 1133 (Member Price: RM 850)" << endl;
			cout << "======================================" << endl;
			cout << "\n";
			cout << "Are you part of our membership? (Y/N)" << endl;
			cin >> member;

			if (member == 'y' || member == 'Y') {
				cout << "\n";
				cout << "Please enter the product code that you want to buy (1, 2, 3, 4): ";
				cin >> number;

				switch (number)
				{
				case 1:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h,4);
						cout << "I'm sorry, our system could not identify the quantity you entered.";
						goto end;
					}
					total += price[0] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 2:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h,4);
						cout << "I'm sorry, our system could not identify the quantity you entered.";
						goto end;
					}
					total += price[1] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 3:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h,4);
						cout << "I'm sorry, our system could not identify the quantity you entered.";
						goto end;
					}
					total += price[2] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 4:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h,4);
						cout << "I'm sorry, our system could not identify the quantity you entered.";
						goto end;
					}
					total += price[3] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				default:
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h,4);
					cout << "Error: I'm sorry, the product code you've entered is invalid." << endl;
					system("pause");
					system("cls");
					goto end;
				}
			}
			else if (member == 'n' || member == 'N') {
				cout << "Please enter the product code that you want to buy (1, 2, 3, 4): ";
				cin >> number;

				switch (number)
				{
				case 1:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						goto end;
					}
					total += price1[0] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 2:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "\n";
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						goto end;
					}
					total += price1[1] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 3:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						goto end;
					}
					total += price1[2] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				case 4:
					cout << "Please specify the quantity of your items: ";
					cin >> n;
					if (n > 10000)
					{
						cout << "You've reached the maximum quantity of the product." << endl;
						system("pause");
						system("cls");
						goto retry;
					}
					else if (n == 0)
					{
						goto end;
					}
					total += price1[3] * n;
					cout << "Do you wish to add more items? (Y/N)" << endl;
					cin >> rpt1;
					if (rpt1 == 'y' || rpt1 == 'Y')
					{
						system("cls");
						goto retry;
					}
					else
						goto end2;
				default:
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h,4);
					cout << "Error: I'm sorry, the product code you've entered is invalid." << endl;
					system("pause");
					system("cls");
					goto retry;
				}
			}
			else if (member != 'y' && member != 'Y' && member != 'n' && member != 'N') {
				cout << "Unfortunately, our system was not able to recognise you. " << endl;
				system("pause");
				system("cls");
				goto retry;
			end2:
				cout << "\n";
				cout << "The total payment you have to pay for now is RM " << total << endl;

				cout << "\n";
				cout << "Please enter your delivery distance in kilometres (KM)." << endl;
				cout << "Distance in kilometres (KM): ";
				cin >> km;

				if (km <= 30)
				{
					charges1 = 50;
					goto end3;
				}
				else if (km <= 100)
				{
					charges1 = 50 + (km - 30) * 3;
					goto end3;
				}
				else
				{
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h,4);
					cout << "\n";
					cout << "Your delivery destination has gone out of our range. Products are not able to be delivered." << endl;
					return 0;
				}
			}

		end3:
			stotal = total + charges1;
			tax = stotal + (stotal * 10 / 100);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,10);
			cout << "\n";
			cout << "The price included a government tax of 10%." << endl;
			cout << "Therefore, the grand total of your products is RM " << tax << endl;
			system("pause");
			goto end1;
		}



		case 3://calculate delivery charges
		{
			cout << "\n";
			cout << "Please enter your delivery distance in kilometres (KM)." << endl;
			cout << "Distance in kilometres (KM): ";
			cin >> km;

			if (km <= 30)
			{
				charges = 50;
				cout << "The total delivery charge will be RM " << charges << endl;
				goto end;
			}
			else if (km <= 100)
			{
				charges = 50 + (km - 30) * 3;
				cout << "The total delivery charge will be RM " << charges << endl;
				goto end;
			}
			else
			{
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h,4);
				cout << "\n";
				cout << "Your delivery destination has gone out of our range. Products are not able to be delivered." << endl;
				return 0;
			}
		}

		case 4://exit
		{
		end1:
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,14);
			cout << "\n";
			cout << "Thank you for visiting BestDeal mall using our programme. Please come again to show your support.\n";
			cout << "\n";
			cout << " __________      __________    __________    ____________   ____________    __________    ___________     __" << endl;
			cout << "/\\  _____  \\    /\\  _______\\  /\\  ________\\  \\_\\___   ___\\ /\\  ________ \\  /\\  _______\\  / \\  _______ \\  /\\ \\ " << endl;
			cout << "\\ \\ \\____\\  \\__ \\ \\ \\______   \\ \\ \\________      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\ \\______   \\  \\ \\______\\ \\ \\ \\ \\ " << endl;
			cout << " \\ \\  _______  \\ \\ \\  _____\\   \\_\\_______  \\      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\  _____\\   \\ \\  _______  \\ \\ \\ \\ " << endl;
			cout << "  \\ \\ \\      \\  \\ \\ \\ \\                \\ \\  \\      \\ \\  \\    \\ \\ \\       \\ \\ \\ \\ \\         \\ \\ \\     \\ \\ \\ \\ \\ \\ " << endl;
			cout << "   \\ \\ \\______\\  \\ \\ \\ \\________  ______\\_\\  \\      \\ \\  \\    \\ \\ \\______/ /  \\ \\ \\________ \\ \\ \\     \\ \\ \\ \\ \\ \\________ " << endl;
			cout << "    \\_\\___________\\ \\_\\_________\\ \\_\\_________\\      \\_\\__\\    \\_\\________/    \\_\\_________\\ \\_\\_\\     \\_\\_\\ \\_\\_________\\ " << endl;
			return 0;
		}
		default:
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,4);
			cout << "\n";
			cout << "Unfortunately, the option chosen is not a choice." << endl;
			break;
		}

		}
	end:
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h,14);
		cout << "\n";
		cout << "Do you want to return to the main menu? (Y/N)" << endl;
		cin >> rpt;
		if (rpt == 'n' || rpt == 'N')
		{
			goto end1;
		}
		system("cls");

	} while (rpt == 'Y' || rpt == 'y');
	return 0;
}
