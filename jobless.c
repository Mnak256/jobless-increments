/*The goal of the program is to show how jobless I am.
The target is to increment the value of i from 0 to 5 using different techniques 
I dont know why I am doing this or why I am using C.
Clearly Brainfuck is the best programming language and it is also my 
favourite language*/
#include <stdio.h>
void theNormalOne()
{
	int i = 0;
	i +=5;
	printf("The value of i : %d\n",i);
}

void theBeginnerOne()
{
	int i = 0;
	i = i + 5;
	printf("The value of i : %d\n",i);
}

void theTooMuchTimeOne()
{
	int i = 0;
	i++;
	i++;
	i++;
	i++;
	i++;
	printf("The value of i : %d\n",i);
}

void thePerfectOne()
{
	int i = 0;
	i = i + 1;
	i = i + 1;
	i = i + 1;
	i = i + 1;
	i = i + 1;
	printf("The value of i : %d\n",i);
}

void theLoopOne()
{
	int i;
	for(i = 0; i<5; i++)
	{
		//Seriously
	}
	printf("The value of i : %d\n",i);
}

void theWhileIsGodOne()
{
	int i = 0;
	int j = 0;
	while(j!=5)
	{
		i++;
		j++; //Who doesnt like to use extra variables??????
	}
	printf("The value of i : %d\n",i);
}

void theWaitWhatOne()
{
	int i = 0;
	int x = 4;
	while(i < i + x)
	{
		i += x;
		x -= 1;
	}
	i = i / 2;
	printf("The value of i : %d\n",i);
}

void theRecursionOne(int i)
{
	if(i == 5)
		printf("The (using R) value of i : %d\n",i);
	else
		theRecursionOne(i + 1);
}

int main()
{
	theNormalOne();
	theBeginnerOne();
	theTooMuchTimeOne();
	thePerfectOne();
	theLoopOne();
	theWhileIsGodOne();
	theWaitWhatOne();
	theRecursionOne(0);
}
