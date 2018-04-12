#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        
        vector<int>::iterator it;
        vector<vector<int>>::iterator iter;
        vector<int> vec_tmp;
        for(iter = array.begin();iter!=array.end();iter++)
        {
            vec_tmp = *iter;
            for(it = vec_tmp.begin();it != vec_tmp.end();it++)
                if(*it == target)
                    return true;
        }
        return 0;
    }

      bool Find2(int target, vector<vector<int>> array) {
         for(int i = 0;i<array.size();i++)
         {
             for(int j = 0;j<array[0].size();j++)
                 if(target == array[i][j])
                     return true;
         }
         return 0;
    }
};

void main()
{
    return ;
}