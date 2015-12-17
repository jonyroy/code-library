#include<bits/stdc++.h>
using namespace std;
class MiniatureDachshund {
	public:
	int maxMikan(vector <int> mikan, int weight) {
		sort(mikan.begin(),mikan.end());
		int cou=0;
		for(int i=0;i<mikan.size();i++)
            if(weight+mikan[i]<=5000)
           {
              cou++;
              weight+=mikan[i];
           }
           return cou;
	}
};
