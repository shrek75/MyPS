using System;
using System.Collections.Generic;

public class Solution {
    public bool solution(string s) {
        Stack<int> stack = new Stack<int>();
        foreach(char c in s)
        {
            if(c == '(')
                stack.Push(1);
            else
            {
                if(stack.Count == 0) return false;
                stack.Pop();
            }
        }
        
        if(stack.Count != 0) return false;
        bool answer = true;
        return answer;
    }
}