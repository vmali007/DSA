class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int index_r=0;
        while(i<n){
            int j=i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            chars[index_r++] = chars[i]; 
            
            int count = j-i;
            
            if (count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[index_r++] = ch;
                }
            }
        i = j;
        }
        
        return index_r;
    }
};