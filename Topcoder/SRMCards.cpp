#include<bits/stdc++.h>
using namespace std;
class SRMCards {
	public:
	int maxTurns(vector <int> cards) {
		sort(cards.begin(),cards.end());
		int c=0;
		for(int i=0;i<cards.size();i++)
        {
            c++;
            if(cards[i]==cards[i+1]-1&&i<cards.size())
                i++;
        }
        return c;
	}
};
