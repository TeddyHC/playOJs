#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    
    vector<int> res;
    int i, j;
    for (i = 0; i < nums.size()-1; i++){
        for (j = i + 1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    cout<<res[0]<<"  "<<res[1]<<endl;
    return 0;
}