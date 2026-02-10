class Solution {
public:
    bool isValid(string s) {
       //create stack
        stack<char> stack;
        for(char i: s){
            if(i=='(' || i=='{' || i=='['){
                stack.push(i);
            }else{
                if(stack.empty()) 
                return false;
                char top=stack.top();
                if((i==')' && top=='(' ) || 
                (i==']' && top=='[' ) ||
                ( i=='}' && top=='{')) {
                    stack.pop();
                }else{
                    return false;
                }
            }
        }
        if(stack.empty()){
            return true;
        }
       return false;
    }
};