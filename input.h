#include <iostream>
#include <sstream>
#include <iterator>
#include <climits>
#include <deque>
#include <fstream>
using namespace std;

const int min_size = 30;

class input
{
protected:

	// Room variables
	string room_no[min_size]; 
	int rows[min_size], cols[min_size], t_rooms;

	// Roll Number variables
	int t_branches, roll_no[min_size], sort[min_size][min_size];
	int roll_size[min_size];
	string branch_name[min_size], rollno[min_size];
	char input_file[15];
	
	// File variable
	ifstream infile;	// Read contents of file
	ofstream outfile;	// Write into file
	fstream file;
	
public:
	// Getting Details about room and branch.
	void room_details();
	void rollno_details();
	void input_in_details();
	void input_out_file();
	void expand(string);
	template<typename OutIter>
	bool parse_number_list_with_ranges(istream& is, OutIter out);
	void roll_no_sort();
};
