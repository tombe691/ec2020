// File: main.cpp
// Summary: Main function for some structs
// Version: 1.11
// Owner: Niklas Karlsson
// ---------------------------------------------------------------
// Log: 2020-11-06 Created the file. Niklas
//      2020-11-07 Just playing with a struct and how to iterate through it
//      with some basic knowledge. Niklas

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <algorithm>

// How many fake entries do you want to create? (loops)
#define HOWMANYDOESITTAKE 256
// Hate this shit. But hate to make my own.
using namespace std;

/*
 * Structure Node. Must be the most overused name ever!!
 * FOO BAR??!
 */
struct Node
{
    int id;
    string player;
    double howLong;
    struct Node *next;
};

// Couldnt bare to make a header for this little.
struct Node *list;
void initNode(struct Node *head, int id, string player, double howLong);
void setNext(struct Node *head, int id, string player, double howLong);
void display(struct Node *head);
double doubleRand(void);
string randomString(unsigned int minLength, unsigned int length);

/*
 * Main function. Yeehaaa!
 */
int main(void)
{
    srand(unsigned(time(NULL)));
    struct Node *head = new Node;

    initNode(head, 1, randomString(3, 15), doubleRand());

    int i = 2;

    while (i < HOWMANYDOESITTAKE)
    {
        setNext(head, i, randomString(3, 15), doubleRand());
        i++;
    }

    // Could display everything in the while but that could take a while...
    display(head);
}

/*
 * At first there was nothing.. and then there was.. this
 */
void initNode(struct Node *head, int id, string player, double howLong)
{
    // Has to be nothing else. This is the first entry ever!
    // Must feel so special right?
    head->id = id;
    head->player = player;
    head->howLong = howLong;
    head->next = NULL;
}

/*
 * Set "node"->next
 */
void setNext(struct Node *head, int id, string player, double howLong)
{
    // Yes, new node. So simple but.. yAh
	Node *newNode = new Node;
	// INSERT IT.
	newNode->id = id;
	newNode->player = player;
	newNode->howLong = howLong;
	newNode->next = NULL;

	Node *cur = head;
	while (cur)
	{
		if (cur->next == NULL)
		{
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

/*
 * Display our finest node list.
 */
void display(struct Node *head)
{
	// int i = 0;
	Node *list = head;
	// This could be anything. Just to simulate something.
	cout << "Listing all the players online... " << endl;
	while (list)
	{
		// Move along, nothing special here.. q(o_O)p <-- headphones.
		cout << "ID: " << list->id << "\t\t"
			 << "Nickname: " << list->player << "\t\t"
			 << "Played (in time): " << list->howLong << endl;
		list = list->next;
		// i++;    // Wait.. what? WHY YOU HERE? This is not your job! IMPOSTER!
		// i++ was the imposter...
	}
	cout << "Got to the end.. that's all folks!" << endl;
}

// Set a random double digit.
double doubleRand(void)
{
	return (double(rand()) / double(10));
}

/*
 * Too bored to slam the keyboard when intering inputs.
 * It works KINDA how I want it too. Not pleased though.
 * Call function by: randomString(min, max)
 */
string randomString(unsigned int minLength, unsigned int maxLength)
{
	// Want some characters to occur more than others.
	// Hence why I use more of some than others..
	static const char con[] = "BBBbbbCCccDDDdddFFffGgHHhhJJJjjjKKkkkLLLlll"
        "MMMmmmNNNnnnPPppQqRRRrrrSSSSssssTTttVVvvWwXxZz";
    // This looks like someone got a hammer on their toes?
	static const char vow[] = "AAAaaaEEEeeeIIiiOOOoooUuYy";

	// Fetch length of the arrays. No need for manual input.
	int conLength = sizeof(con) - 1;    // - 1 for '\0'
	int vowLength = sizeof(vow) - 1;    // - 1 for '\0'

	// How long the string should be.
	int length = (rand() % maxLength);
	// We cannot go lower than the min value..
	int trueLength = ((length < minLength) ? minLength : length);
	// Add one for NULL character '\0'
	// Was thought as a password generator at first
	// And then I changed my mind. But couldnt think of a better variable.
	char pass[trueLength + 1];
	// The iterator.
	int i;

	// Loop de loop
	for (i = 0; i < trueLength; i++)
	{
		for (int v = 0, c = 0; i == 1; c++, v++)
		{
            if (pass[0] == con[c])
            {
                pass[i] = vow[rand() % vowLength];
                // cout << "pass[0] = " << pass[0] << "; con[" << c << "] = " << con[c] << ";" << endl;
                break;
            }
            else if (pass[0] == vow[v])
            {
                pass[i] = con[rand() % conLength];
                // cout << "pass[0] = " << pass[0] << "; vow[" << v << "] = " << vow[v] << ";" << endl;
                break;
            }
        }
        // If con or vow.. fifty-fifty... meh
        pass[i] = ((rand() % 2 == 0) ? con[rand() % conLength] :
                        vow[rand() % vowLength]);
    }

    // hence why we add + 1 on the pass variable.
    pass[i] = '\0';

    // cout << "Word is: " << pass << endl;
    return pass;
}
