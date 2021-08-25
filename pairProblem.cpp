#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

int main(){
vector<int> num = {10,5,2,3,-6,9,11};
int sum = 4;
unordered_set<int> map;

for (int i =0;i<num.size(); i++){
  int subs = sum - num[i];
  if(map.find(num[subs]) == map.end()){
    cout << num[i] << "," << subs;
    break;
  } else {
    map.insert(subs);
  }
}

return 0;
}