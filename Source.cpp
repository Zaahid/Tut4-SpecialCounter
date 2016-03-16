#include <iostream>
using namespace std;

class Counter
{
public:
	Counter obj();
	int d1 = 0;
	int d2;
	int stop1 = 0;
	int incr, decr;
	Counter(int val)
	{
		incr = val;
	}
	void stepInc(int inc)
	{
		incr = inc;
	}
	void stepDec(int dec)
	{
		decr = dec;
	}
	void stop(int val)
	{
		if (d1 == 0)
		{
			stop1 = 255;
		}
		if (d1 == 20)
		{
			stop1 = 210;
		}

	}

	void start()
	{

		for (int i = 0; i <stop1; i++)
		{
			d1 = d1 + incr;
			if (d1 == 20)
			{
				d2 = 20;
			}
		}
		cout << "Counter stopped at: " << c1 << endl;
		stop(d2);
		for (int k = 0; k < 210; k++)
		{
			d2 = d2 + incr;
		}
		cout << "Counter stopped at: " << d2 << endl;
	}//Count start at 20



};//Class

void main()
{
	Counter obj();
	int in;
	cout << "Please enter increment to count in: " << endl;
	cin >> in;
	stepInc(in);
	stepDec(in);
	.start();
}

