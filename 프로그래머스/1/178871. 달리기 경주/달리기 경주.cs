using System;
using System.Collections.Generic;
class Friend
{
    //내앞의 친구
    public string left;
    //내뒤의 친구
    public string right;
}

public class Solution
{
    public string[] solution(string[] players, string[] callings)
    {
        string[] result = new string[players.Length];

        //name을 key로
        Dictionary<string,Friend> mydic = new Dictionary<string,Friend>(50000);

        string lastPlayer = null;
        foreach(string player in players)
        {
            mydic[player] = new Friend { left = lastPlayer, right = null };
            if(lastPlayer != null) mydic[lastPlayer].right = player;
            lastPlayer = player;
        }

        foreach(string target in callings)
        {
            string left = mydic[target].left;
            string leftleft = mydic[left].left;
            string right = mydic[target].right;

            if(leftleft != null)
            mydic[leftleft].right = target;
            mydic[target].left = leftleft;
            mydic[target].right = left;
            mydic[left].left = target;
            mydic[left].right = right;
            if (right != null)
                mydic[right].left = left;
        }

        //왼쪽이 null인애가 제일 앞이니까 찾아
        string str ="";
        for(int i = 0;i< players.Length;i++)
        {
            if(mydic[players[i]].left == null)
            {
                str = players[i];
            }
        }

        players[0] = str;
        for (int i = 1; i < players.Length; i++)
        {
            players[i] = mydic[str].right;
            str = mydic[str].right;
        }

        return players;
    }
}