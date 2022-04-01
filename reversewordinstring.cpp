void isPalindrome(string str) {

       int s=0,e=0;
       for(int i=0;i<=str.length();i++){ 

           if(str[i] == " " || str[i] == "/0"){
                e = i-1;
                while(s<=e){
                    swap(str[s],str[e]);
                }
                s = i+1;
           }
       }
}





        
        while(st<=e){
            if(temp[st] != temp[e]){
                return false;
            }
            st++;e--;
        }
       }
    
    }