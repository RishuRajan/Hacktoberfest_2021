class Solution {
    public boolean isPalindrome(int x) {
       int y=x,num=0,number=0;
        if(x<0)
        {
            return false;
        }
        else{
            while(x!=0)
         {
             num=x%10;
            number=number*10+num;
              x=x/10;
             
         } 
            
            if(number==y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    }
}
