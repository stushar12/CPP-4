#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{  
vector <pair<int,int>> Vector;
int arr[]={20,40,30,10};
for (int i=0;i<4;i++)
{
    Vector.push_back({arr[i],i});
}
sort(Vector.begin(),Vector.end());

for (auto itr:Vector)
{
    cout<<itr.first<<"  "<<itr.second<<endl;
}


}

