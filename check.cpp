#include <iostream>
#include <time.h>
using namespace std;
int checkNum(int,int);
int N,num2;
int main()
{
	int round = 0;
		cout << "###Welcome to guessing number game###" << endl;
		srand(time(NULL));
		int N = rand() % 10 + 1;
		do{
			cout << "Guess the number(1 to 10): ";
			cin >> num2;
			round++;
		    checkNum(num2,N);
          }while (N != num2);
		  cout << "The secret number is " << N << endl;
		  cout << "You made " << round << " guesses " << endl;
}
	

int checkNum(int N1,int N2)
{
	if (N1 < N2)
	{
		cout << "-----The secret number is lower-----" << endl;
	}
	else if (N1 > N2)
	{
		cout << "-----The secret number is higher-----" << endl;
	}
	else
	{
		cout << "Congratulation!!!" << endl;
	}
	return(N1,N2);
}