class Solution {
public:
    bool isValid(string s) {
        stack <char> br;
        
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                br.push(ch);
            }
            else
            {
                //if we get closing brackets there can be two cases
                //the top of the stack is an opening bracket
                //the top of the stack is not an opening bracket
                //or the stack is empty
                if(!br.empty())
                {
                    char top=br.top();
                    if((ch==')' && top=='(') || 
                       (ch=='}' && top=='{') || 
                       (ch==']' && top=='['))
                    {
                        br.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(br.empty())
        {
            return true;
        }
        return false;
    }
};
