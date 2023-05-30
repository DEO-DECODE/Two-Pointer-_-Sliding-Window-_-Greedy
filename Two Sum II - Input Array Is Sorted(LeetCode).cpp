class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int i=0, j=numbers.size()-1;
    int sumtarget=0;
    vector<int> answer;
    while(i<=j){
        if(numbers[i]+numbers[j]==target){
            answer={i+1,j+1};
            return answer;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return answer;
}
};
