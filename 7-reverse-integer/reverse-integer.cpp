class Solution {
public:

    int reverse(int x) {
     
   /*
        int remainder;
    int next=0;
//if(n<=-2147483648){
  //  return 0;
//}
   
while(n!=0){
    if(next>214748364){
    return 0;
    }
    if(next<-214748364){
        return 0;
    }
 remainder=n%10;
 next=next*10+remainder;
 n=n/10;   
   
}
return next;

*/
    int rev = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;

        
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;

        rev = rev * 10 + pop;
    }
    return rev;

    }
};