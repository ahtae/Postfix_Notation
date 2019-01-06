// Kristy Li
// CSCI 373-01
// Assignment #3: STL Stacks to Evaluate Postfix Expressions

// postfixnotation.cpp

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack <int> evaluate;

    string postfix;
    cin >> postfix;
    bool isOperator(string);

    while(true)
    {

        for (int i=0; i<postfix.length(); i++)
        {
            if (!isOperator(postfix[i]))
            {
                evaluate.push(postfix[i]-'0');
            }

        else if (isOperator(postfix[i]))
        {
            char z = postfix[i];
            char x = evaluate.top();
            evaluate.pop();
            char y = evaluate.top();
            evaluate.pop();



            while (!calculator.empty())
            {
                cout << ' ' << calculator.top();
                calculator.pop();
            }
        }


        cout << "Welcome to the Postfix Notation Calculator!" << endl;

        cout << "Evaluate the Postfix Notation Expression." << endl;

        char postfix[] = {'(', '2','+','3',')','*','(','5','-','1'};

//    char postfix[] = {'2', '+','(','3','*',')',-','1'};

        cout << "The value of the expression is " << endl;

        system("pause");
        return 0;

    }

    int evaluate (int operator1, int operator2, char operate)
            {
                int result;
                switch (operate)
                {
                case '*':
                    result = operator2 * operator1;
                    break;

                case '/':
                    result = operator2 / operator1;
                    break;

                case '+':
                    result = operator2 + operator1;
                    break;

                case '-':
                    result = operator2 - operator1;
                    break;
                }
            }
