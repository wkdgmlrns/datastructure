
#include <iostream>
#include <stdlib.h>
/* BEGIN_YOUR_CODE
#include <WHATEVERYOUWANT>
 END_YOUR_CODE */

int TAFunction(int argc);

using namespace std;

/* BEGIN_YOUR_CODE */

struct Node {
	int data;
};

int YourCustomFunction_1(int something, int anything)
{
	return 0;
}

int YourCustomFunction_2(int something, int anything)
{
	return 0;
}

/* END_YOUR_CODE */

int Solve(int N, int K)
{
	int result = 0;
	
	/* BEGIN_YOUR_CODE */
	int a, b;
	a = YourCustomFunction_1(0, 0);
	b = YourCustomFunction_2(0, 0);
	
	result = a;
	/* END_YOUR_CODE */

	return result;   // safe position
}

int main(int argc, char** argv)
{
	int N = 0, K = 0;
	int result = 0;

	if (TAFunction(argc)) {
		N = atoi(argv[1]);
		K = atoi(argv[2]);
		cout << Solve(N, K);
		return 0;
	}

	/* BEGIN_YOUR_CODE */
	int a = 0, b = 0;
	cout << "N:";
	cin >> N;
	cout << "K:";
	cin >> K;

	result = Solve(N, K);
	cout << "result:" << result << endl;
	/* END_YOUR_CODE */
	
	return 0;
}

int TAFunction(int argc)
{
	if (argc > 2)
		return true;
	else
		return false;
}
*/