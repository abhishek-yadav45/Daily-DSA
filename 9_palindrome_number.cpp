class Solution {
public:
    bool isPalindrome(int x) {
        int orig = x;
     long long reve = 0;
        while(x>0){
            int ld = x%10;
            reve = reve*10+ld;
            x = x/10;
        }
        if(reve == orig){
            return true;
        }
        else{
            return false;
        }
        
    }
};