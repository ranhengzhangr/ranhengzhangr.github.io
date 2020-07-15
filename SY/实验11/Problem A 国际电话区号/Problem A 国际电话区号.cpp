#include <iostream>

struct dialing_code{
	const char *country;
	int code;
};

int main (void)
{
    using namespace std;

	int i;
	const struct dialing_code country_codes[] =
	{
		{"Argentina", 54}, {"Bangladesh", 880},
		{"Brazil",	55}, {"Burma (Myanmar)", 95},
		{"China", 86}, {"Colombia", 57},
		{"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
		{"Ethiopia", 251}, {"France", 33},
		{"Germany", 49}, {"India", 91},
		{"Indonesia", 62}, {"Japan", 81},
		{"Mexico", 52}, {"Nigeria", 234},
		{"Pakistan", 92}, {"Philippines", 63},
		{"Poland", 48}, {"Russia", 7},
		{"South Africa", 27}, {"Korea", 82},
		{"Spain", 34}, {"Sudan", 249},
		{"Thailand", 66}, {"Turkey", 90},
		{"Ukraine", 380}, {"United Kingdom", 44},
		{"United States", 1}, {"Vietnam", 84}
	};
	struct dialing_code mote;

	cin >> mote.code;
	for(i = 0; i < 30; i++)
	{
		if(mote.code == country_codes[i].code){
			break;
		}
	}
	if(i == 30){
		cout << "No corresponding country found!";
	}
	else{
		cout << country_codes[i].country;
	}

	return 0;
}
