using System;

public class Solution
{

    struct Pos
    {
        public int x;
        public int y;
    }
    public int[] solution(string[] park, string[] routes)
    {
        //나의 위치 찾기
        Pos cur = new Pos();
        for (int i = 0; i < park.Length; i++)
        {
            for (int j = 0; j < park[i].Length; j++)
            {
                if (park[i][j] == 'S')
                {
                    cur.x = j;
                    cur.y = i;
                    i = park.Length;
                    break;
                }
            }
        }

        //가야할 방향
        Pos dir = new Pos();
        foreach (string s in routes)
        {
            switch (s[0])
            {
                case 'E': dir = new Pos { x = 1, y = 0 }; break;
                case 'W': dir = new Pos { x = -1, y = 0 }; break;
                case 'S': dir = new Pos { x = 0, y = 1 }; break;
                case 'N': dir = new Pos { x = 0, y = -1 }; break;
            }
            

            int count = s[2] - '0'; //몇번 가야하는지
            int nX = cur.x + dir.x * count;
            int nY = cur.y + dir.y * count;
            //범위 확인
            if (nX < 0 || nX > park[0].Length - 1 || nY < 0 || nY > park.Length - 1)
                continue;


            nX = cur.x;
            nY = cur.y;
            //지나가다가 장애물 있는지 확인
            for (int i = 0; i < count; i++)
            {
                nX += dir.x;
                nY += dir.y;
                if (park[nY][nX] == 'X')
                {
                    nX = cur.x;
                    nY = cur.y;
                    break;
                }
            }

            cur.x = nX;
            cur.y = nY;
        }

        return new int[] { cur.y, cur.x };
    }

}