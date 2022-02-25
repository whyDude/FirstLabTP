#include<iostream>
#include<locale>
#include"chdQueue.h"
using namespace std;

template <class T>


void choozen_queue(T* queue, int qNumb)//шаблончик
{
	int c;
	int flag = 1;
	int temp = 0; //введенное значение пользователем
	int index = 0; //номер очереди, с которой работаем
	int res = 0; //переменная для выполнения пункта задания
	int count = 1; //кол-во очередей, с которыми работает пользователь
	int chosen_q; //номер выбранной очереди

	while (flag == 1)
	{
		cout << "1 - Add new element of queueu(push)" << endl;
		cout << "2 - Extract element of queue (pop)" << endl;
		cout << "3 - Print queue" << endl;
		cout << "4 - Find the range" << endl;
		cout << "5 - Copy queue" << endl;
		cout << "6 - Merge queue" << endl;
		cout << "7 - Choose another queue" << endl;
		cout << "8 - Which queue is choosen?" << endl;
		cout << "0 - Choose access modifierа" << endl;
		cout << "-> ";
		cin >> c;
		switch (c)
		{
		case 1:
			system("cls");
			cout << "Input ur  value: ";
			cin >> temp;
			queue[index].push(temp);
			cout << "Ur value was added.\n " << endl;
			break;

		case 2:
			if (queue[index].blSmthng())
			{
				cout << "Queue is free, nothing to extract.\n " << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				temp = queue[index].pop();
				cout << "Extract element is: " << temp << endl;
				cout << "\n";
			}
			break;

		case 3: //вывод очереди на экран
			if (queue[index].blSmthng())
			{
				cout << "Queue is free, nothing to print.\n " << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				queue[index].print();
				cout << "\n";
			}
			break;

		case 4:
			if (queue[index].blSmthng())
			{
				cout << "Queue is free, task can't be completed.\n " << endl;
				system("pause");
				break;
			}

			else
			{
				system("cls");
				res = queue[index].specFunction();
				cout << "The range is: " << res << endl;
				cout << "\n";
			}
			break;

		case 5: //создание копии очереди
			if (queue[index].blSmthng())
			{
				cout << "Queue is free, nothing to copy \n " << endl;
				system("pause");
				break;
			}

			else
			{
				if (count == qNumb)
				{
					cout << "U cant add new queue, cause number of queues is max.\n" << endl;
					system("pause");
					break;
				}
				system("cls");
				queue[count].copy(queue[index]);
				cout << "Queue has been copied. U get 2 the same queues.\n" << endl;
				count++;
			}
			break;
		case 6:
			if (count == 1)
			{
				cout << "U have just one queue, nothing to merge.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "Which queue u wanna merge?" << endl;
				cin >> chosen_q;
				if ((chosen_q < 0) || (chosen_q >= qNumb) || (chosen_q == index))
				{
					cout << "Somethig wrong!\n" << endl;
					system("pause");
					break;
				}
				if (queue[index].blSmthng())
				{
					cout << "U can't merge, cause second queue is free.\n" << endl;
					system("pause");
					break;
				}
				system("cls");
				queue[index].merge(queue[chosen_q]);
				cout << "Queues has been merged.\n" << endl;
			}
			break;
		case 7:
			system("cls");
			cout << "Queue is choosen number>>" << index << endl;
			cout << "Input number of queue (by 0 to " << qNumb << ") , that u wanna choose: ";
			cin >> chosen_q;
			if ((chosen_q < 0) || (chosen_q >= qNumb) || (chosen_q == index))

			{
				cout << "Something wrong!\n" << endl;
				system("pause");
			}
			else
			{
				index = chosen_q;
				system("cls");
				cout << "U switched to queue number>>" << index << endl;
				cout << "\n";
			}
			break;
		case 8:
			system("cls");
			cout << "Queue is choosen number>>" << index << endl;
			cout << "\n";
			break;
		case 0:
			cout << "\n";
			flag = 0;
			break;
		}
	}
}
int main()
{
	int num_q;
	int c;
	int flag = 1;
	chdQueue_pri* q1 = NULL;
	chdQueue_pro* q2 = NULL;
	chdQueue_pab* q3 = NULL;

	cout << "This is consol program for 1st lab!" << endl;
	cout << "Input number of queues ";
	cin >> num_q;
	system("cls");

	cout << "Choose, what access modifierа u wanna get" << endl;
	while (flag == 1)
	{
		cout << "1 - private" << endl;
		cout << "2 - protect" << endl;
		cout << "3 - public" << endl;
		cout << "0 - Exit" << endl;
		cout << "-> ";
		cin >> c;
		switch (c)
		{
		case 1:
			q1 = new chdQueue_pri[num_q];
			system("cls");
			choozen_queue(q1, num_q);
			delete[] q1;
			break;
		case 2:
			q2 = new chdQueue_pro[num_q];
			system("cls");
			choozen_queue(q2, num_q);
			delete[] q2;
			break;

		case 3:
			q3 = new chdQueue_pab[num_q];
			system("cls");
			choozen_queue(q3, num_q);
			delete[] q3;
			break;

		case 0:
			flag = 0;
			break;

		default:
			system("cls");
			cout << "Somethig wrong, try again!" << endl;
			break;
		}
	}
	return 0;
}