class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        HashSet<Character> set = new HashSet<>();
        for(int i = 0; i < allowed.length(); i++){
            set.add(allowed.charAt(i));
        }

        int ret = 0;
        for(String s : words){
            boolean broke = false;
            for(int i = 0; i < s.length(); i++){
                if(!set.contains(s.charAt(i))){
                    broke = true;
                    break;
                }
            }

            if(!broke){
                ret++;
            }
        }

        return ret;
    }
}
