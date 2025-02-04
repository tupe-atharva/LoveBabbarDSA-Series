#include<iostream>
#include<vector>
using namespace std;
 
int main(){
int nums[] = {1,2,3,4,5,6,7,8,9,10};
int target = 19;
vector<int> ans;
int length = sizeof(nums)/sizeof(int);
//cout<<length<<endl;
    for (int i = 0 ; i < 10 ; i++){
        for(int j = i+1 ; j < 10; j++)
        {
            if( nums[i] + nums[j] == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                // break;
            }
        }
    }
    cout<<endl;
    cout << "The pair of elements adding upto to target is : " << endl; 
    for (int i = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i] << " " ;
    }cout<<endl;
    cout<<endl;

            
 
return 0;
}
           