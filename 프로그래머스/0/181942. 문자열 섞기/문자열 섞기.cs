using System;

public class Solution {
    public string solution(string str1, string str2) {
        
  char[] s1 = str1.ToCharArray();
 char[] s2 = str2.ToCharArray();
 char[] answer = new char[s1.Length + s2.Length];
 

 for (int i =0; i<s1.Length;i++)
 {
     answer[i*2] = s1[i];
     answer[i*2 +1] = s2[i];
 }
 
string s = new string(answer);
 return s;
    }
}