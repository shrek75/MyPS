using System;

public class Solution {
    public int[] solution(int num, int total) {
        
        int[] answer = new int[num];
        
        int average = total / num;
        int min = average - num / 2;
        int max = average + num / 2;
        
        //짝수면
        if(num % 2 == 0)
            min++;
        
        for(int i= min; i<= max; i++)
            answer[i - min] = i;
            
        return answer;
    }
}