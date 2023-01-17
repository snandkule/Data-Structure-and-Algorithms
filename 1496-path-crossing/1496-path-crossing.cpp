class Solution {
public:
    bool isPathCrossing(string path) {
        
        int x=0,y=0;
        set<pair<int,int>> s1;
        s1.insert({x,y});
        
        for(auto&c:path){
            
            if(c=='N'){
                y++;
            }else if(c=='E'){
                x++;
            }else if(c=='S')
            {
                y--;
            }else if(c=='W'){
                x--;
            }
            if(s1.find({x,y})!=s1.end())return true;
            s1.insert({x,y});
        }
        return false;
    }
};