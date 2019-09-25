#include <iostream>
#include <vector>
#include <map>
#include<algorithm>

using namespace std;
 std::vector<std::pair<int,int>> minimumabsvalue(std::vector<int> &v)
 {
     std::map<int,int>minp;
     std::vector<std::pair<int,int>>r;

      for(int i=0;i<v.size()-1;++i)
    {
        int d=v[i+1]-v[i];
         minp[d]=i;

        // v.push_back(std::make_pair(v[i+1],v[i]));

    }
    auto pm=std::min_element(minp.begin(),minp.end());
    for(int i=0;i<v.size()-1;++i)
    {
      if((v[i+1]-v[i])<=pm->first)

      r.push_back(std::make_pair(v[i],v[i+1]));
    }
    return r;


 }
int main() {
    std::vector<int>v{4,2,1,3};
    std::vector<std::pair<int,int>>r;
    std::sort(v.begin(),v.end());
    r=minimumabsvalue(v);
    for(auto e:r)
    {
      std::cout<<"{"<<e.first<<","<<e.second<<"}";
    }


}
