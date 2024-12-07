int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int max_len = 0;
    int start = 0;
    int hash[128] = {0}; // I have created a hash table to store string's characters' indexes.
    for(int end = 0; end < n; end++){
        char curr = s[end];
        if(hash[curr] > start){
            start = hash[curr]; // If curent character is repeating I adjust start's location to last seen part.
        }
        hash[curr] = end + 1;  // I give location to every character.
        int len = end + 1 - start;
        if(len > max_len){
            max_len = len;
        }
    }
    return max_len;
}
