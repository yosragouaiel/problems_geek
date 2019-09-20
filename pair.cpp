{
#include <bits/stdc++.h>
using namespace std;
void add_pair(vector<pair<string,pair<int,int> > > &A,string str,int x,int y);
int get_size(vector<pair<string,pair<int,int> > > &A);
void print_values(vector<pair<string,pair<int,int> > > &A);
void sort_pair(vector<pair<string,pair<int,int> > > &A);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<string,pair<int,int> > > A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				string name;
				cin>>name;
				int x,y;
				cin>>x>>y;
				add_pair(A,name,x,y);
			}
			if(c=='b')
			{
				cout<<get_size(A)<<" ";
			}
			if(c=='c')
			{
				print_values(A);
			}
			if(c=='d')
			{
			 	sort_pair(A);
			}
		
		
		}
cout<<endl;
	}
	return 0;
}
}


/*This is a function problem.You only need to complete the function given below*/
/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */

void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     pair<int,int> pv=make_pair(x,y);
     pair <string,pair<int,int> >p=make_pair(str,pv);
    // A.insert(A.end(),p);
    A.push_back(p);
}
/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
    return A.size();
}
/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for(auto &val:A)
     {
         cout<<val.first<<" "<<val.second.first<<" "<<val.second.second<<" ";
     }
}
/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     std::sort(A.begin(),A.end(),
     [](const pair<string,pair<int,int> >&i,const pair<string,pair<int,int> >&j){
         
         return (i.second <= j.second);
    
             } );
             }
