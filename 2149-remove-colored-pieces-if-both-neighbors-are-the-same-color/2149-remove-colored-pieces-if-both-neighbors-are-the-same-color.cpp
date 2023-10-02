class Solution {
public:
    bool winnerOfGame(string colors) {
        int counta=0,countb=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i-1]==colors[i+1] && colors[i]==colors[i-1]){
                if(colors[i-1]=='A')
                counta++;
                else
                countb++;
            }
        }
        return counta>countb;
    }
};