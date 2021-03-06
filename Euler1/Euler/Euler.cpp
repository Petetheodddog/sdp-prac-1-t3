// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

bool isPalindrome(int);

void Euler1(){
	//Eulers Problem #1

	int sum = 0;//init variables

	for (int i = 1; i <= 1000; i++) //loop through all integers between 1 and 1000
	{
		if (i % 3 == 0 || i % 5 == 0) { //if the number can be divided by either 3 or 5 perfectly 
			sum += i;                   //then add it to the sum
		}
	}
	cout << "The sum of the multiples of 3 and 5 for all natural numbers under 1000 is: ";
	cout << sum;
}

void Euler3()//written by Luke Wilkinson G16W4712
{
	int count;
	uint64_t num;
	uint64_t bigFac;

	//cout << "Find the Largest Prime Factor, enter a number" << endl;
	//cin >> num;

	//test that it works with the number for the question: What is the largest prime factor of the number 600851475143?
	num = 600851475143;

	for (int fac = 1; fac <= num; fac++)
	{
		if (num % fac == 0)
		{
			count = 0;

			for (int testP = 2; count == 0 && fac > testP; testP++) //Test the prime
			{
				if (fac % testP == 0)
				{
					count++;
				}
			}

			if (count == 0)
			{
				bigFac = fac;
			}
		}

	}
	cout << "The Biggest factor is: ";
		cout << bigFac;

}


void Euler4()	//Author: Mogoba, Meetseashele Selina, 17M4640
{
	int max = 0;    //initialize result

	for (int i = 999; i >= 100; i--)
	{
		for (int j = i; j >= 100; j--)
		{
			int product = i * j;    //calculating the product of two 3-digit numbers
			//if (product < max)
			  //  break;

			if (isPalindrome(product) && product > max)     //checking whether it is a palindrome and the largest
			{
				max = product;
				break;
			}

			else if (product < max)
				break;
		}
	}

	cout << "The largest palindrome made from the product of two 3-digit numbers is " << max << endl;
}

bool isPalindrome(int num)	//Author: Mogoba, Meetseashele Selina, 17M4640
{
	bool result = true;
	int number, digit, reverse = 0;

	number = num;

	while (num)     //checking whether the product is a palindrome
	{
		digit = num % 10;
		reverse = (reverse * 10) + digit;
		num = num / 10;
	}

	if (number == reverse)    //check the reversed value against the unchanged variable
		result = true;
	else
		result = false;

	return result;
}


int main()
{
	int stop;


	//add your Euler Method
	Euler1(); //Euler 1 done by Liam
	cout << '\n';
	Euler3(); //Euler 3 done by Luke
	cout << '\n';
	Euler4(); //Euler 4 done by Selina

	cin >> stop;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

