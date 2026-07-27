class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> set;
        for(int i = 0; i < allowed.length(); i++){
            set.insert(allowed[i]);
        }

        int ret = 0;
        for(int i = 0; i < words.size(); i++){
            bool broke = false;
            for(int j = 0; j < words[i].length(); j++){
                if(!set.contains(words[i][j])){
                    broke = true;
                    break;
                }
            }

            if(!broke) ret++;
        }
        
        return ret;
    }
};
