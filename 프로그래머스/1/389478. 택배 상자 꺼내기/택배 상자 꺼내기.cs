using System;

public class Solution {
    public int solution(int n, int w, int num) {
         //n 총개수 num 타겟 w 한층당개수
 //w 6이라가정

 // num + 12 * x <= n  : x의 최대값
 // 12 * x <= n - num
 // x <= (n - num) / 12
 int answer = 0;

 int x = 0;
 for (; ; x++)
 {
     if(x > (n - num) / (2*w))
     {
         x--;
         break;
     }
 }
 // 그럼이제 num위에 세어야할 박스가 0개거나 1개거나.
 // 2개이상은 12로 나누는거에서 계산됨

 // 내위에있는 수를 계산하는법 좀어렵네
 // (a)*2 + 1  을 더해줘야함
 // 7 위에있는 수를 계산한다고 쳤을때
 // (12 - 7) * 2 + 1임
 // 식으로하면 (12 - num) * 2 + 1
 // 이숫자가 n보다 크면 0개고, n이하이면 1개네.

 int target = num + 2 * w * x;
 if (target % w == 0)
     target += 1;
 else target += (w - target % w) * 2 + 1;
 


 if (target <= n)
     answer += 1;

 answer += 2 * x;

 answer += 1; //자기자신

 return answer;
    }
}