#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int XOR=0;
    for(auto it:nums){
        XOR=XOR^it;
    }
    return XOR;
}