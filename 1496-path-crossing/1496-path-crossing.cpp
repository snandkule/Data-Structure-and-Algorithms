class Solution {
public:
    bool isPathCrossing(string path) {
        
      int x = 0, y = 0;
        unordered_set<string> seen = {"0,0"};
        for (char d : path) {
            if (d == 'N') y++;
            if (d == 'E') x++;
            if (d == 'S') y--;
            if (d == 'W') x--;

            string loc = to_string(x) + "," + to_string(y);
            if (seen.find(loc) != seen.end())
                return true;
            seen.insert(loc);
        }
        return false;
    }
};