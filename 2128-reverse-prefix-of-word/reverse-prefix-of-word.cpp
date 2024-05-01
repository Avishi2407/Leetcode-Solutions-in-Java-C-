class Solution {
public:
    string reversePrefix(string word, char ch) {
        
//         int count=0;
//         int n = word.length();
//         for(int i =0; i<n; i++){
//             count++;
//             if(word[i] == ch){
//                 break;
//             }
            
//         }
//         if(count == n && word[n] ){
//             return word;
//         }
//         else{
//             for(int i = 0; i < count/2; i++){
//                 swap(word[i], word[count - i - 1]);
//             }
//             return word;
//         }
    
        int j = word.find(ch);
        if (j != -1) {
            reverse(word.begin(), word.begin() + j + 1);
        }
        return word;
    
    }
};