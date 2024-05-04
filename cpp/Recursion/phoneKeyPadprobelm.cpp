class Solution {
    private:
   void  solve(string digits , vector<string>& ans, int index, string output, string maping[]){
if(index>=digits.length()){
    ans.push_back(output);
    return ;
}
int num= digits[index]-'0';
string arr= maping[num];
for(int i=0; i< arr.length();i++){
    output.push_back(arr[i]);
    solve(digits, ans ,index+1, output, maping);
    output.pop_back();
}
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
           if(digits.length()==0){
            return ans;
        }
        int index=0;
        string output="";
        string maping[10]={"","" ,"abc","def", "ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, ans , index, output  , maping);
        return ans;
        
    }
};