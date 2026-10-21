class Solution {
public:
    bool isValid(string s) {
        stack <char> a;
        int j=0;
       for (int i=0;i<s.size();i++){
        if ((s[i]==')' || s[i]==']'||s[i]=='}') && a.empty())
            return false;
        else if (s[i]==')' && !s.empty()){
                if (a.top()=='[' || a.top()=='{')
                    return false;
                a.pop();
        }
        else if (s[i]==']'&& !a.empty()){
            if (a.top()=='(' || a.top()=='{')
                    return false;
            else{
                    a.pop();
                    cout<<"Pop";
            }
        }  
        else if (s[i]=='}'&& !a.empty()){
            if (a.top()=='(' || a.top()=='[')
                    return false;
                    a.pop();
        }
        else{
            a.push(s[i]);
            
        } 
            
            
       }
        return a.empty();
        
    }
};
