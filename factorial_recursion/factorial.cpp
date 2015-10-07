/* 
Jean Tu 
Made on: August 2015
*/

#include <iostream> 
#include <cmath> 

using namespace std; 

//using recursion to find the factorial 
int factorial(int n)
{
	if(n == 1) //base case 
		return 1; 
	else 
		return factorial(n-1)*n; 
}

int main(int argc, char* argv[]) 
{ 
	int number = 0; 
	cout << "Enter a number and find out it's Factorial: "; 
	cin >> number; 
	if(number >0) {
		cout << factorial(number) << endl;; 
	}
}