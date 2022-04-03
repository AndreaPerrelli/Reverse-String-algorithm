// Reverse String.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

/*Write a program that takes in a line of text as input, and outputs that line of text in reverse.
The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.*/

/*Ex: If the input is:
      Hello there Hey 
  then the output is:	
      ereht olleH yeH  */

#include <iostream>
#include <string>


using namespace std;

int main() {

	string str;

	string rev;

	getline(cin, str);

	while (str != "done") {
		rev = "";
		if (str != "done") {

			int n = str.length();

			for (int i = n - 1; i >= 0; i--) {

				rev.push_back(str[i]);

			}
			cout << rev << endl;			
		}
		else {

			break;

		}

		getline(cin, str);

	}

	return 0;

}

