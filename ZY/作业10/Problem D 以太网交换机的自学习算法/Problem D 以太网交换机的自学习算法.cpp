#include <iostream>

#include <string>

struct MAC{
	std::string Source;
	std::string Address;
	std::string Ports;
	std::string Time;
};

void quick_sort(struct MAC Mail[], int len);

int main(void)
{
	using namespace std;

	int i, k, t;
	struct MAC Mail[24];

	for(i = 0; i < 24&&cin >> Mail[i].Source; i++)
	{
		cin >> Mail[i].Address
			>> Mail[i].Ports
			>> Mail[i].Time;
	}
	cout << "Mac Address       Ports   Time"
		 << endl;
	quick_sort(Mail, i);
	for(k = 0; k < i; k++)
	{
		for(t = 0; t < 18; t++)
		{
			if(t < Mail[k].Address.size()){
				cout << Mail[k].Address[t];
			}
			else{
				cout << " ";
			}
		}
		for(t = 0; t < 8; t++)
		{
			if(t < Mail[k].Ports.size()){
				cout << Mail[k].Ports[t];
			}
			else{
				cout << " ";
			}
		}
		cout << Mail[k].Time
			 << endl;
	}

	return 0;
}

void quick_sort(struct MAC Mail[], int len)
{
	using namespace std;

	int i, k;
	struct MAC mote;

	if(len <= 1)    return;
	k = 0;
	for(i = 1; i < len; i++)
	{
		if(Mail[i].Source > Mail[k].Source)    k = i;
	}
	mote = Mail[len - 1];
	Mail[len - 1] = Mail[k];
	Mail[k] = mote;
	quick_sort(Mail, len - 1);
}
