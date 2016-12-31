#include <iostream>
#include <string>
#include <vector>
using namespace std;

void pushLyrics(vector<string> &v);
void firstDay(vector<string> &v);
int main()
{
	vector<string> lyrics;
	pushLyrics(lyrics);
	firstDay(lyrics);

}

//----------------------------------------------------//
//Adds the various lines to the vector 
void pushLyrics(vector<string> &v)
{
	v.push_back ("a Partridge in a Pear Tree");
	v.push_back ("Two Turtle Doves");
	v.push_back ("Three French Hens");
	v.push_back ("Four Calling Birds");
	v.push_back ("Five Golden Rings");
	v.push_back ("Six Geese a Laying");
	v.push_back ("Seven Swans a Swimming");
	v.push_back ("Eight Maids a Milking");
	v.push_back ("Nine Ladies Dancing");
	v.push_back ("Ten Lords a Leaping");
	v.push_back ("Eleven Pipers Piping");
	v.push_back ("Twelve Drummers Drumming");
}

//----------------------------------------------------//
//Displays the Lyrics for the First Day of Christmas as they are slightly differing from following Days
void firstDay(vector<string> &v) 
{
	cout << "On the first day of Christmas\n" << "my true love gave to me: \n";
	cout << v[0];
}
