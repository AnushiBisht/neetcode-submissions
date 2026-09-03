class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>stack;

        for(const string& op: tokens){
            if(op == "+"){
                int top = stack.back();
                stack.pop_back();
                int newTop = top + stack.back();
                stack.pop_back();
                stack.push_back(newTop);
            }else if(op == "*"){
                int top = stack.back();
                stack.pop_back();
                int newTop = top * stack.back();
                stack.pop_back();
                stack.push_back(newTop);
            }else if(op == "-"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back() - top;
                stack.pop_back();
                stack.push_back(newTop);
            }else if(op == "/"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back() / top;
                stack.pop_back();
                stack.push_back(newTop);
            }else{
                stack.push_back(stoi(op));
            }
        }

        return stack.back();
    }
};
