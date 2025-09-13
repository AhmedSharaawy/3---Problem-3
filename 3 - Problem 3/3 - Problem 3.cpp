
#include <iostream>
#include <string>
using namespace std;

void ReadeNumer(int &Number )                      // ReadNumber محتاجة متغير Number بالإشارة → فلازم يكون عندك متغير حقيقي تمرره.
{
    cout << " Please enter a.............. Number = " << endl;
    cin >> Number;
}
int ResultNumber(int Number)
{
    int Result = Number % 2;
    cout << " Result = " << Result << endl;
    
    return Result;
}
void CheckResult(int Number, int Result)            // CheckResult نوعها void وما بترجعش قيمة → ما ينفعش تمررها لدالة ثانية.
{
    if (Result == 0)
    {
        cout << " Even" << endl;
    }
    else
    {
        cout << " ODD " << endl;
    }
}


// __________________حل الدكتور______________________



enum en_Number_Type { Odd = 1, Even = 2 };
int Read_Number()
{
	int Number = 0;
	cout << "please enter a number?\n";
	cin >> Number;
	return Number;
}
en_Number_Type Check_Number_Type(int Number)
{
	if (Number % 2 == 0)
	{
		return en_Number_Type::Even;
	}
	else
	{
		return en_Number_Type::Odd;
	}

}
void Print_Number_Type(en_Number_Type Number_Type)
{
	if (Number_Type == en_Number_Type::Even)
	{
		cout << "the number you entered is Even\n";
	}
	else
	{
		cout << "the number you entered is Odd\n";
	}
}



int main()
{
    int N;
    int Res;

    ReadeNumer(N);
   Res= ResultNumber(N);
    CheckResult(N, Res);


	// __________________حل الدكتور______________________

	Print_Number_Type(Check_Number_Type(Read_Number()));
	
}