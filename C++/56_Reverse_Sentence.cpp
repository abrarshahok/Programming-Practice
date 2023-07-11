#include <iostream>
#include <stack>
#include <string>
using namespace std;

string revSentence(string sen)
{
    stack<string> wordStack;
    string words = "";
    string revSen = "";
    for (int i = 0; i < sen.length(); i++)
    {

        if (sen.at(i) == ' ')
        {
            wordStack.push(words);
            words = "";
        }
        else
        {
            words += sen.at(i);
        }
    }
    wordStack.push(words);

    while (!wordStack.empty())
    {
        revSen += wordStack.top();
        wordStack.pop();
        if (!wordStack.empty())
        {
            revSen += " ";
        }
    }

    return revSen;
}
int main()
{
    string sen = "Abrar am I";
    string rev = revSentence(sen);
    cout << rev;
}