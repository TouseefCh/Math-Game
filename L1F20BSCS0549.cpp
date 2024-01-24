// Project: Print the mathematical questions for little brother. After solving the question tells him his total score ,score in each opertion and tells about wrong questions.
// Authors: 1) Muhammad Huzaifa Sohail Khan (L1F20BSCS0557)                                                       
//          2) Muhammad Touseef             (L1F20BSCS0549) 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	char value = 0;
	int answer = 0;   //for answer enter by the user
	char level = 0;   // for difficulty level 
	int limit = 0;    // for limit of qusetions 
	int EScore = 0;   // obtained score in easy mode
	int ETotal = 0;   // Total score in easy mode
	int MScore = 0;   // obtained score in Medium mode
	int MTotal = 0;   // Total score in Medium mode
	int HScore = 0;   // obtained score in Hard mode
	int HTotal = 0;   // Total score in Hrad mode
	//for calculating score at end;
	int EFinal = 0, MFinal = 0, HFinal = 0;
	int EF_Total = 0, MF_Total = 0, HF_Total = 0;
	while (1)
	{
		// for correct and total  questions of each operation in easy mode
		int E_Add = 0, E_Sub = 0, E_Multiply = 0, E_Div = 0;
		int ETotal_Add = 0, ETotal_Sub = 0, ETotal_Multiply = 0, ETotal_Div = 0;

		// for correct and total  questions of each operation in Medium mode
		int M_Add = 0, M_Sub = 0, M_Multiply = 0, M_Div = 0;
		int MTotal_Add = 0, MTotal_Sub = 0, MTotal_Multiply = 0, MTotal_Div = 0;

		// for correct and total  questions of each operation in hard mode
		int H_Add = 0, H_Sub = 0, H_Multiply = 0, H_Div = 0;
		int HTotal_Add = 0, HTotal_Sub = 0, HTotal_Multiply = 0, HTotal_Div = 0;

		cout << "_____*__________" << endl;
		cout << "\nPlease make selection from the following" << endl;
		cout << "P: Practice Math" << endl;
		cout << "S: Show Score." << endl;
		cout << "Q: Quit." << endl;
		cout << "_____*__________" << endl;
		cout << "\nWhat do you want to do : ";
		cin >> value;
		if (value != 'P' && value != 'p' && value != 'S' && value != 's' && value != 'Q' && value != 'q') {
			cout << "\nplease enter valid input" << endl;
			cout << "\nWhat do you want to do : ";
			cin >> value;
		}

		if (value == 'P' || value == 'p')
		{
			int EScore = 0;
			int ETotal = 0;
			cout << "_____*______" << endl;
			cout << "\nWhat difficult level do you want " << endl;
			cout << "E: Easy" << endl;
			cout << "M: Medium" << endl;
			cout << "H: Hard" << endl;
			cout << "_____*______" << endl;
			cout << "\nEnter difficult level : ";
			cin >> level;
			if (level != 'E' && level != 'e' && level != 'M' && level != 'm' && level != 'H' && level != 'h') {
				cout << "\nplease enter valid input" << endl;
				cout << "\nEnter difficult level : ";
				cin >> level;
			}
			if (level == 'E' || level == 'e') {
				cout << "\nHow many problems do you want : ";
				cin >> limit;
				int i;
				for (i = 0; i < limit; i++, ETotal += 2)
				{
					srand(time(0));
					int num1;
					num1 = (rand() % 20) + (-10);
					int num2;
					num2 = (rand() % 20) + (-10);
					int plus = num1 + num2;
					int minimum = num1 - num2;
					int multiply = num1 * num2;
					int division = num1 / num2;
					int help = (rand() % 4);
					if (help == 0)
					{
						cout << "What is " << num1 << " + " << num2 << " ? ";
						cin >> answer;

						if ((num1 + num2) == answer)
						{
							cout << "Correct, great job! " << endl;
							EScore += 2;
							E_Add++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << plus << endl;
						}
						ETotal_Add++;
					}

					else if (help == 2) {
						cout << "What is " << num1 << " - " << num2 << "? ";
						cin >> answer;
						if ((num1 - num2) == answer) {
							cout << "Correct, great job!" << endl;
							EScore += 2;
							E_Sub++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << minimum << endl;
						}
						ETotal_Sub++;
					}
					else if (help == 3) {
						cout << "What is " << num1 << " * " << num2 << "? ";
						cin >> answer;
						if ((num1 * num2) == answer) {
							cout << "Correct, great job!" << endl;
							EScore += 2;
							E_Multiply++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << multiply << endl;
						}
						ETotal_Multiply++;
					}
					else if (help == 1) {
						int num3 = (rand() % 20);
						if (num3 % 2 != 0) {
							num3++;
						}
						if (num3 == 0) {
							num3 = 2;
						}
						int num4 = 2;
						int division1 = num3 / num4;
						if (num3 % num4 == 0) {
							cout << "What is " << num3 << " / " << num4 << "? ";
							cin >> answer;
							if ((num3 / num4) == answer) {
								cout << "Correct, great job!" << endl;
								EScore += 2;
								E_Div++;
							}
							else {
								cout << "Sorry, that's incorrect, the answer is " << division1 << endl;
							}
							ETotal_Div++;
						}
					}
				}
				EFinal = EScore;
				EF_Total = ETotal;
				cout << "\nYour score is " << EScore << "/" << ETotal << endl;
				int ECounter = E_Div + E_Sub + E_Multiply + E_Add;
				cout << "\nYou got " << ECounter << " / " << i << "  questions corect " << endl << endl;
				cout << " ADDITION " << "   " << " SUBTRACTION" << "   " << "MULTIPLICATION" << "   " << "DIVISION" << endl << endl;
				cout << "   " << E_Add << "/" << ETotal_Add << "            ";
				cout << E_Sub << "/" << ETotal_Sub << "            ";
				cout << E_Multiply << "/" << ETotal_Multiply << "            ";
				cout << E_Div << "/" << ETotal_Div << endl;
				cout << "\nNeed more practice with : " << endl;
				if (E_Add < ETotal_Add) {
					cout << " Addition " << endl;
				}
				if (E_Sub < ETotal_Sub) {
					cout << " Subtraction " << endl;
				}
				if (E_Multiply < ETotal_Multiply) {
					cout << " Multiplication " << endl;
				}
				if (E_Div < ETotal_Div) {
					cout << " Divion " << endl;
				}
			}
			else if (level == 'M' || level == 'm')
			{
				int MScore = 0;
				int MTotal = 0;
				cout << "\nHow many problems do you want : ";
				cin >> limit;
				int i;
				for (i = 0; i < limit; i++, MTotal += 4) {
					srand(time(0));
					int num1;
					num1 = (rand() % 50) + (-25);
					int num2;
					num2 = (rand() % 50) + (-25);
					int plus = num1 + num2;
					int minimum = num1 - num2;
					int multiply = num1 * num2;
					int division = num1 / num2;
					srand(time(0));
					int help = (rand() % 4);
					if (help == 0) {
						cout << "What is " << num1 << " + " << num2 << " ?  ";
						cin >> answer;
						if ((num1 + num2) == answer) {
							cout << "Correct, great job! " << endl;
							MScore += 4;
							M_Add++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << plus << endl;
						}
						MTotal_Add++;
					}
					else if (help == 1) {
						cout << "What is " << num1 << " - " << num2 << "? ";
						cin >> answer;
						if ((num1 - num2) == answer) {
							cout << "Correct, great job! " << endl;
							MScore += 4;
							M_Sub++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << minimum << endl;
						}
						MTotal_Sub++;
					}
					else if (help == 2) {
						cout << "What is " << num1 << " * " << num2 << "? ";
						cin >> answer;
						if ((num1 * num2) == answer) {
							cout << "Correct, great job!" << endl;
							MScore += 4;
							M_Multiply++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << multiply << endl;
						}
						MTotal_Multiply++;
					}
					else if (help == 3)
					{
						int num4 = (rand() % 50);
						if (num4 % 2 != 0) {
							num4++;
						}
						if (num4 == 0) {
							num4 = 2;
						}
						int num5 = 2;
						int division2 = num4 / num5;
						division2;
						cout << "What is " << num4 << " / " << num5 << "? ";
						cin >> answer;
						if (num4 % num5 == 0) {
							if ((num4 / num5) == answer) {
								cout << "Correct, great job!" << endl;
								MScore += 4;
								M_Div++;
							}
							else
							{
								cout << "sorry that's incorrect, the answer is " << division2 << endl;
							}
							MTotal_Div++;
						}
					}
				}
				MFinal = MScore;
				MF_Total = MTotal;
				cout << "\nYour score is " << MScore << "/" << MTotal << endl << endl;
				int MCounter = M_Div + M_Sub + M_Multiply + M_Add;
				cout << " You got " << MCounter << " / " << i << "  questions corect " << endl << endl;
				cout << " ADDITION " << "   " << " SUBTRACTION" << "   " << "MULTIPLICATION" << "   " << "DIVISION" << endl << endl;
				cout << "   " << M_Add << "/" << MTotal_Add << "           ";
				cout << M_Sub << "/" << MTotal_Sub << "             ";
				cout << M_Multiply << "/" << MTotal_Multiply << "           ";
				cout << M_Div << "/" << MTotal_Div;
				cout << "\n Need more practice with : " << endl;
				if (M_Add < MTotal_Add) {
					cout << " Addition " << endl;
				}
				if (M_Sub < MTotal_Sub) {
					cout << " Subtraction " << endl;
				}
				if (M_Multiply < MTotal_Multiply) {
					cout << " Multiplication " << endl;
				}
				if (M_Div < MTotal_Div) {
					cout << " Divion " << endl;
				}
			}
			else if (level == 'H' || level == 'h')
			{
				int HScore = 0;
				int HTotal = 0;
				cout << "\nHow many problems do you want : ";
				cin >> limit;
				int i;
				for (i = 0; i < limit; i++, HTotal += 5) {
					srand(time(0));
					int num1 = (rand() % 100) + (-50);
					int num2 = (rand() % 100) + (-50);
					int plus = num1 + num2;
					int minimum = num1 - num2;
					int multiply = num1 * num2;
					int division = num1 / num2;
					srand(time(0));
					int help = (rand() % 4);
					if (help == 0) {
						cout << "What is " << num1 << " + " << num2 << "? ";
						cin >> answer;
						if ((num1 + num2) == answer) {
							cout << "Correct, great job! " << endl;
							HScore += 5;
							H_Add++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << plus << endl;
						}
						HTotal_Add++;
					}
					else if (help == 1) {
						cout << "What is " << num1 << " - " << num2 << "? ";
						cin >> answer;
						if ((num1 - num2) == answer) {
							cout << "Correct, great job!" << endl;
							HScore += 5;
							H_Sub++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << minimum << endl;
						}
						HTotal_Sub++;
					}
					else if (help == 2) {
						cout << "What is " << num1 << " * " << num2 << "? ";
						cin >> answer;
						if ((num1 * num2) == answer) {
							cout << "Correct, great job!" << endl;
							HScore += 5;
							H_Multiply++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << multiply << endl;
						}
						HTotal_Multiply++;
					}
					else if (help == 3) {
						int num6 = (rand() % 100);
						if (num6 % 2 != 0) {
							num6++;
						}
						if (num6 == 0) {
							num6 = 2;
						}
						int num7 = 2;
						int division3 = num6 / num7;
						cout << "What is " << num6 << " / " << num7 << "? ";
						cin >> answer;
						if ((num6 / num7) == answer) {
							cout << "Correct, great job!" << endl;
							HScore += 5;
							H_Div++;
						}
						else {
							cout << "Sorry, that's incorrect, the answer is " << division3 << endl;
						}
						HTotal_Div++;
					}
				}
				HFinal = HScore;
				HF_Total = HTotal;
				cout << "\nYour score is " << HScore << "/" << HTotal << endl;
				int HCounter = H_Div + H_Sub + H_Multiply + H_Add;
				cout << " \nYou got " << HCounter << " / " << i << "  questions corect " << endl << endl;
				cout << " ADDITION " << "   " << " SUBTRACTION" << "   " << "MULTIPLICATION" << "   " << "DIVISION" << endl << endl;
				cout << "   " << H_Add << "/" << HTotal_Add << "           ";
				cout << H_Sub << "/" << HTotal_Sub << "             ";
				cout << H_Multiply << "/" << HTotal_Multiply << "           ";
				cout << H_Div << "/" << HTotal_Div << endl;
				cout << "\n Need more practice with : " << endl;
				if (H_Add < HTotal_Add) {
					cout << " Addition " << endl;
				}
				if (H_Sub < HTotal_Sub) {
					cout << " Subtraction " << endl;
				}
				if (H_Multiply < HTotal_Multiply) {
					cout << " Multiplication " << endl;
				}
				if (H_Div < HTotal_Div) {
					cout << " Divion " << endl << endl;
				}
			}
		}
		else if (value == 'S' || value == 's') {
			if (level == 'E' || level == 'e') {
				cout << "\n Your last score is " << EFinal << "/" << EF_Total << endl;
			}
			else  if (level == 'M' || level == 'm') {
				cout << "\n Your last score is " << MFinal << "/" << MF_Total << endl;
			}
			else if (level == 'H' || level == 'h') {
				cout << " \nYour last score is " << HFinal << "/" << HF_Total << endl;
			}
			else {
				cout << "\nScore not found!" << endl;
			}
		}
		else if (value == 'Q' || value == 'q')
		{
			cout << "\nThank you for practicing! " << endl << endl;
			break;
		}
	}
	return 0;
}